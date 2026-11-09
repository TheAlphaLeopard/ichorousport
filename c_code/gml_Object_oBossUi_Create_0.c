// gml_Object_oBossUi_Create_0 @ 0x1408431d0

undefined8 *
gml_Object_oBossUi_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  code *pcVar7;
  ulonglong in_stack_ffffffffffffff00;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88 [3];
  byte local_7c;
  undefined1 local_68 [12];
  byte local_5c;
  uint local_58 [2];
  undefined8 *local_50;
  undefined4 *local_48;
  undefined8 *local_40;
  undefined1 *local_38;
  
  local_b0 = "gml_Script_anon@111@gml_Object_oBossTongue_Create_0";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 9;
  FUN_140041df0(local_58,param_4,1,param_5);
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_88,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 9;
  puVar5 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_50;
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_a8 = 9;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    if (0 < (int)local_58[0]) {
      puVar5 = (undefined8 *)*local_50;
    }
    in_stack_ffffffffffffff00 = 0;
    pcVar7 = (code *)CONCAT44((int)((ulonglong)pcVar7 >> 0x20),DAT_1419fd6d8);
    puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_f8,0,pcVar7,0);
    if (puVar2 != puVar5) {
      local_e8 = (longlong *)*puVar2;
      uStack_e0 = *(undefined4 *)(puVar2 + 1);
      uStack_dc = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_e8);
    }
  }
  local_a8 = 0xb;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5a58);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
  uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_e0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
    local_e8 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_e8,puVar5);
  }
  FUN_1400462a0(&local_e8,uVar3);
  local_c8 = (undefined4)local_e8;
  uStack_c4 = local_e8._4_4_;
  uStack_c0 = uStack_e0;
  uStack_bc = uStack_dc;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_c8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_a8 = 0xc;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f090);
  FUN_140e609c0(param_1);
  if (puVar5 != puVar2) {
    local_c8 = *(undefined4 *)puVar5;
    uStack_c4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_c0 = *(undefined4 *)(puVar5 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_c8);
  }
  FUN_140e60910(1);
  local_a8 = 0xd;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  uStack_dc = 6;
  local_e8 = param_1;
  FUN_140e87440(&local_e8,DAT_141a0a828,0x80000000,&local_98,(ulonglong)pcVar7 & 0xffffffffffffff00,
                in_stack_ffffffffffffff00 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if (puVar4 != local_88) {
    local_c8 = *puVar4;
    uStack_c4 = puVar4[1];
    uStack_c0 = puVar4[2];
    uStack_bc = puVar4[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_c8);
  }
  local_48 = local_88;
  local_40 = &local_d8;
  local_c8 = (undefined4)local_98;
  uStack_c4 = local_98._4_4_;
  uStack_c0 = uStack_90;
  uStack_bc = uStack_8c;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_c8);
  local_38 = local_68;
  gml_Script_draw_line_sprite(param_1,param_2,&local_f8,3,&local_48);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,3,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar5 = local_50;
    do {
      puVar2 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

