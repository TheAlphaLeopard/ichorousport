// gml_Script_anon_6376_SnowState_SnowState @ 0x1404f5f00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_anon_6376_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 uVar7;
  undefined8 uVar6;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  longlong *local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  longlong **local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  
  local_d0 = "gml_Script_anon@5174@SnowState@SnowState";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0xb1;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(&local_b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_ec = 0;
  uVar5 = 0;
  local_f8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0xb2;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcf28);
  if (puVar2 != &local_a8) {
    local_108 = *(undefined4 *)puVar2;
    uStack_104 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_100 = *(undefined4 *)(puVar2 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_108);
  }
  local_60 = &local_a8;
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_1404f6028:
    local_108 = *(undefined4 *)puVar4;
    uStack_104 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_100 = *(undefined4 *)(puVar4 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_108);
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 != &local_98) goto LAB_1404f6028;
  }
  local_58 = &local_98;
  uVar6 = CONCAT44(uVar7,DAT_1419fcba8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_f8,2,uVar6,&local_60);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_c8 = 0xb3;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_ac = 6;
    local_b8 = param_1;
    uVar3 = FUN_140e5c910();
    FUN_140e42c10(uVar3,param_1);
    local_68 = &local_b8;
    if (param_4 < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_1404f6123:
      local_108 = *(undefined4 *)puVar4;
      uStack_104 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_100 = *(undefined4 *)(puVar4 + 1);
      uStack_fc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_108);
    }
    else {
      puVar4 = (undefined8 *)*param_5;
      if (puVar4 != &local_a8) goto LAB_1404f6123;
    }
    local_60 = &local_a8;
    uVar3 = FUN_140e634e0(param_1,param_2,&local_f8,2,CONCAT44(uVar7,DAT_1419fcba8),&local_68);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 != '\0') {
      local_c8 = 0xb4;
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 5;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcf88);
      local_108 = _DAT_141dd39b8;
      uStack_104 = uRam0000000141dd39bc;
      uStack_100 = uRam0000000141dd39c0;
      uStack_fc = DAT_141dd39c4;
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_108);
      local_58 = &local_98;
      if ((param_4 < 1) || (puVar2 = (undefined8 *)*param_5, puVar2 != &local_88)) {
        local_108 = *(undefined4 *)puVar2;
        uStack_104 = *(undefined4 *)((longlong)puVar2 + 4);
        uStack_100 = *(undefined4 *)(puVar2 + 1);
        uStack_fc = *(undefined4 *)((longlong)puVar2 + 0xc);
        if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
        FUN_140041b80(&local_88,&local_108);
      }
      local_50 = &local_88;
      local_108 = _DAT_141dd3c78;
      uStack_104 = uRam0000000141dd3c7c;
      uStack_100 = uRam0000000141dd3c80;
      uStack_fc = DAT_141dd3c84;
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_78);
      }
      FUN_140041b80(local_78,&local_108);
      local_48 = local_78;
      FUN_140e63610(param_1,param_2,&local_e8,3,uVar3,&local_58);
      local_c8 = 0xb5;
      goto LAB_1404f62cf;
    }
    local_c8 = 0xb8;
  }
  else {
    local_c8 = 0xb2;
  }
  uVar5 = 0x3ff00000;
LAB_1404f62cf:
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  *param_3 = (ulonglong)uVar5 << 0x20;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

