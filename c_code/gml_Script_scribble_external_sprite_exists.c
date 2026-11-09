// gml_Script_scribble_external_sprite_exists @ 0x14045dc00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_scribble_external_sprite_exists
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 **ppuVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  ulonglong in_stack_fffffffffffffef0;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined8 local_60;
  char *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_58 = "gml_Script_scribble_external_sprite_add";
  local_60 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_60;
  local_50 = 6;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(&local_d8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_3c = 0xffffff;
  local_48 = 0;
  local_fc = 0;
  local_108 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddeff4) &&
     (_Init_thread_header(&DAT_141ddeff4), DAT_141ddeff4 == -1)) {
    DAT_141ddeff8 = (longlong *)FUN_140e63aa0(DAT_1419f7968);
    _Init_thread_footer(&DAT_141ddeff4);
  }
  if (DAT_141ddc18a == '\0') {
    FUN_140e64380(DAT_141ddeff8,"gml_Script_scribble_external_sprite_add");
    FUN_140e64380(param_1,"gml_Script_scribble_external_sprite_add");
  }
  local_50 = 8;
  if (DAT_141ddc18a == '\0') {
    DAT_141ddc18a = '\x01';
    puVar2 = (undefined8 *)(**(code **)(*DAT_141ddeff8 + 0x10))(DAT_141ddeff8,DAT_141a09138);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    local_f8 = (undefined4)DAT_1419df7b0;
    uStack_f4 = DAT_1419df7b0._4_4_;
    uStack_f0 = DAT_1419df7b8;
    uStack_ec = DAT_1419df7bc;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_f8);
    local_78 = &local_b8;
    ppuVar7 = &local_78;
    uVar3 = gml_Script___scribble_texture_get_material(param_1,param_2,&local_108,1,ppuVar7);
    uVar8 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_141a09198,0x80000000,&local_48,uVar8,
                  in_stack_fffffffffffffef0 & 0xffffffffffffff00);
    uVar6 = (undefined4)(uVar8 >> 0x20);
    FUN_140e609c0(DAT_141ddeff8);
    if (&local_48 != puVar2) {
      local_f8 = (undefined4)local_48;
      uStack_f4 = local_48._4_4_;
      uStack_f0 = uStack_40;
      uStack_ec = uStack_3c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_f8);
    }
    FUN_140e60910(1);
  }
  local_50 = 10;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  puVar2 = (undefined8 *)(**(code **)(*DAT_141ddeff8 + 8))(DAT_141ddeff8,DAT_141a09138);
  if (puVar2 != &local_d8) {
    local_f8 = *(undefined4 *)puVar2;
    uStack_f4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_f0 = *(undefined4 *)(puVar2 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_f8);
  }
  local_88 = &local_d8;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
LAB_14045df02:
    local_f8 = *(undefined4 *)puVar4;
    uStack_f4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_f0 = *(undefined4 *)(puVar4 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_f8);
  }
  else {
    puVar4 = (undefined8 *)param_5[1];
    if (puVar4 != &local_c8) goto LAB_14045df02;
  }
  local_80 = &local_c8;
  uVar9 = CONCAT44(uVar6,DAT_141a01478);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_108,2,uVar9,&local_88);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  uVar6 = 0;
  if (cVar1 != '\0') {
    local_50 = 0xc;
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    local_f8 = _DAT_141dd2ef8;
    uStack_f4 = uRam0000000141dd2efc;
    uStack_f0 = uRam0000000141dd2f00;
    uStack_ec = DAT_141dd2f04;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_f8);
    local_78 = &local_b8;
    if (param_4 < 2) {
      puVar4 = &DAT_1419df7b0;
LAB_14045dfdb:
      local_f8 = *(undefined4 *)puVar4;
      uStack_f4 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_f0 = *(undefined4 *)(puVar4 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_f8);
    }
    else {
      puVar4 = (undefined8 *)param_5[1];
      if (puVar4 != &local_a8) goto LAB_14045dfdb;
    }
    local_70 = &local_a8;
    local_f8 = _DAT_141dd2ed8;
    uStack_f4 = uRam0000000141dd2edc;
    uStack_f0 = uRam0000000141dd2ee0;
    uStack_ec = DAT_141dd2ee4;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_f8);
    local_68 = local_98;
    ppuVar7 = &local_78;
    FUN_1401ef7f0(param_1,param_2,&local_e8,3,ppuVar7);
    uVar10 = (undefined4)((ulonglong)ppuVar7 >> 0x20);
    uVar6 = local_dc;
  }
  local_50 = 0xf;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_14045e0b8:
    local_f8 = *(undefined4 *)puVar4;
    uStack_f4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_f0 = *(undefined4 *)(puVar4 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_f8);
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 != &local_d8) goto LAB_14045e0b8;
  }
  local_88 = &local_d8;
  uVar9 = CONCAT44(uVar10,DAT_141a04628);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_108,1,uVar9,&local_88);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_50 = 0x11;
    if ((1 << ((byte)uVar6 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    local_f8 = _DAT_141dd2ee8;
    uStack_f4 = uRam0000000141dd2eec;
    uStack_f0 = uRam0000000141dd2ef0;
    uStack_ec = DAT_141dd2ef4;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_f8);
    local_80 = &local_c8;
    if (param_4 < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_14045e1a9:
      local_f8 = *(undefined4 *)puVar4;
      uStack_f4 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_f0 = *(undefined4 *)(puVar4 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_f8);
    }
    else {
      puVar4 = (undefined8 *)*param_5;
      if (puVar4 != &local_b8) goto LAB_14045e1a9;
    }
    local_78 = &local_b8;
    local_f8 = _DAT_141dd2ec8;
    uStack_f4 = uRam0000000141dd2ecc;
    uStack_f0 = uRam0000000141dd2ed0;
    uStack_ec = DAT_141dd2ed4;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_f8);
    local_70 = &local_a8;
    ppuVar7 = &local_80;
    FUN_1401ef7f0(param_1,param_2,&local_e8,3,ppuVar7);
    uVar10 = (undefined4)((ulonglong)ppuVar7 >> 0x20);
    uVar6 = local_dc;
  }
  local_50 = 0x14;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  if (puVar2 != &local_d8) {
    local_f8 = *(undefined4 *)puVar2;
    uStack_f4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_f0 = *(undefined4 *)(puVar2 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_f8);
  }
  local_88 = &local_d8;
  if (param_4 < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[1];
    if (puVar2 == &local_c8) goto LAB_14045e2f6;
  }
  local_f8 = *(undefined4 *)puVar2;
  uStack_f4 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_f0 = *(undefined4 *)(puVar2 + 1);
  uStack_ec = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_f8);
LAB_14045e2f6:
  local_80 = &local_c8;
  if ((param_4 < 1) || (puVar5 = (undefined8 *)*param_5, puVar5 != &local_b8)) {
    local_f8 = *(undefined4 *)puVar5;
    uStack_f4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_f0 = *(undefined4 *)(puVar5 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_f8);
  }
  local_78 = &local_b8;
  FUN_140e634e0(param_1,param_2,&local_108,3,CONCAT44(uVar10,DAT_1419ff3d8),&local_88);
  if ((1 << ((byte)uVar6 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  _eh_vector_destructor_iterator_(&local_d8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_60;
  return param_3;
}

