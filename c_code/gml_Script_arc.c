// gml_Script_arc @ 0x14021f710

undefined8 *
gml_Script_arc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,
              undefined8 *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  byte local_5c;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined1 *local_40;
  undefined8 *local_38;
  
  local_c0 = "gml_Script_approach";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 5;
  _eh_vector_constructor_iterator_(local_a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 7;
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
    if (param_4 < 1) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)*param_5;
    }
  }
  else {
    puVar4 = (undefined8 *)param_5[1];
    puVar2 = (undefined8 *)*param_5;
  }
  iVar1 = FUN_140e851f0(puVar2,puVar4,DAT_141955260,1);
  if (iVar1 == -2 || -1 < iVar1) {
    local_b8 = 10;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    if (param_4 < 3) {
      puVar4 = &DAT_1419df7b0;
      if (param_4 < 1) {
        puVar2 = &DAT_1419df7b0;
      }
      else {
        puVar2 = (undefined8 *)*param_5;
      }
    }
    else {
      puVar4 = (undefined8 *)param_5[2];
      puVar2 = (undefined8 *)*param_5;
    }
    uStack_dc = *(undefined4 *)((longlong)puVar2 + 0xc);
    uStack_e0 = *(undefined4 *)(puVar2 + 1);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
      local_e8 = *puVar2;
    }
    else {
      FUN_1400419b0(&local_e8);
    }
    FUN_1400462a0(&local_e8,puVar4);
    local_d8 = (undefined4)local_e8;
    uStack_d4 = local_e8._4_4_;
    uStack_d0 = uStack_e0;
    uStack_cc = uStack_dc;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_d8);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_58 = local_a8;
    if ((param_4 < 2) || (puVar3 = (undefined8 *)param_5[1], puVar3 != &local_98)) {
      local_d8 = *(undefined4 *)puVar3;
      uStack_d4 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_d0 = *(undefined4 *)(puVar3 + 1);
      uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_d8);
    }
    local_50 = &local_98;
    puVar3 = (undefined8 *)FUN_140e79090(&local_f8,2,&local_58);
  }
  else {
    local_b8 = 8;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    if (param_4 < 3) {
      puVar4 = &DAT_1419df7b0;
      if (param_4 < 1) {
        puVar2 = &DAT_1419df7b0;
      }
      else {
        puVar2 = (undefined8 *)*param_5;
      }
    }
    else {
      puVar4 = (undefined8 *)param_5[2];
      puVar2 = (undefined8 *)*param_5;
    }
    uStack_dc = *(undefined4 *)((longlong)puVar2 + 0xc);
    uStack_e0 = *(undefined4 *)(puVar2 + 1);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
      local_e8 = *puVar2;
    }
    else {
      FUN_1400419b0(&local_e8);
    }
    FUN_1400460e0(&local_e8,puVar4);
    local_d8 = (undefined4)local_e8;
    uStack_d4 = local_e8._4_4_;
    uStack_d0 = uStack_e0;
    uStack_cc = uStack_dc;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_d8);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_40 = local_78;
    if ((param_4 < 2) || (puVar3 = (undefined8 *)param_5[1], puVar3 != &local_68)) {
      local_d8 = *(undefined4 *)puVar3;
      uStack_d4 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_d0 = *(undefined4 *)(puVar3 + 1);
      uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      FUN_140041b80(&local_68,&local_d8);
    }
    local_38 = &local_68;
    puVar3 = (undefined8 *)FUN_140e79230(&local_f8,2,&local_40);
  }
  if (puVar3 != param_3) {
    local_d8 = *(undefined4 *)puVar3;
    uStack_d4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_d0 = *(undefined4 *)(puVar3 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_d8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

