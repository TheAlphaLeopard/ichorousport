// gml_Script_scribble_external_font_remove @ 0x14045b710

longlong *
gml_Script_scribble_external_font_remove
          (undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 **ppuVar7;
  ulonglong uVar8;
  undefined4 uVar10;
  undefined8 uVar9;
  ulonglong in_stack_ffffffffffffff20;
  undefined4 **ppuVar11;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8 [3];
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined4 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_70 = "gml_Script_scribble_external_font_exists";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 9;
  uVar10 = 1;
  _eh_vector_constructor_iterator_(local_b8,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_cc = 0;
  uVar6 = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddefb0) &&
     (_Init_thread_header(&DAT_141ddefb0), DAT_141ddefb0 == -1)) {
    DAT_141ddefb8 = (longlong *)FUN_140e63aa0(DAT_1419f78d8);
    _Init_thread_footer(&DAT_141ddefb0);
  }
  if (DAT_141ddc185 == '\0') {
    FUN_140e64380(DAT_141ddefb8,"gml_Script_scribble_external_font_exists");
    FUN_140e64380(param_1,"gml_Script_scribble_external_font_exists");
  }
  local_68 = 0xb;
  if (DAT_141ddc185 == '\0') {
    DAT_141ddc185 = '\x01';
    puVar2 = (undefined8 *)(**(code **)(*DAT_141ddefb8 + 0x10))(DAT_141ddefb8,DAT_141a06458);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    local_c8 = (undefined4)DAT_1419df7b0;
    uStack_c4 = DAT_1419df7b0._4_4_;
    uStack_c0 = DAT_1419df7b8;
    uStack_bc = DAT_1419df7bc;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_c8);
    local_80 = &local_a8;
    ppuVar7 = &local_80;
    uVar3 = gml_Script___scribble_texture_get_material(param_1,param_2,&local_d8,1,ppuVar7);
    uVar8 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_141a06198,0x80000000,&local_58,uVar8,
                  in_stack_ffffffffffffff20 & 0xffffffffffffff00);
    uVar10 = (undefined4)(uVar8 >> 0x20);
    FUN_140e609c0(DAT_141ddefb8);
    if (&local_58 != puVar2) {
      local_c8 = (undefined4)local_58;
      uStack_c4 = local_58._4_4_;
      uStack_c0 = uStack_50;
      uStack_bc = uStack_4c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_c8);
    }
    FUN_140e60910(1);
  }
  local_68 = 0xd;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar4 = (undefined4 *)(**(code **)(*DAT_141ddefb8 + 8))(DAT_141ddefb8,DAT_141a06458);
  if (puVar4 != local_b8) {
    local_c8 = *puVar4;
    uStack_c4 = puVar4[1];
    uStack_c0 = puVar4[2];
    uStack_bc = puVar4[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_c8);
  }
  local_88 = local_b8;
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
    if (puVar5 == &local_a8) goto LAB_14045ba37;
  }
  local_c8 = *(undefined4 *)puVar5;
  uStack_c4 = *(undefined4 *)((longlong)puVar5 + 4);
  uStack_c0 = *(undefined4 *)(puVar5 + 1);
  uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_c8);
LAB_14045ba37:
  local_80 = &local_a8;
  uVar9 = CONCAT44(uVar10,DAT_141a01478);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_d8,2,uVar9,&local_88);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_68 = 0xf;
  }
  else {
    local_68 = 0x12;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    if (puVar4 != local_b8) {
      local_c8 = *puVar4;
      uStack_c4 = puVar4[1];
      uStack_c0 = puVar4[2];
      uStack_bc = puVar4[3];
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_c8);
    }
    local_88 = local_b8;
    if ((param_4 < 1) || (puVar2 = (undefined8 *)*param_5, puVar2 != &local_a8)) {
      local_c8 = *(undefined4 *)puVar2;
      uStack_c4 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_c0 = *(undefined4 *)(puVar2 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_c8);
    }
    local_80 = &local_a8;
    ppuVar11 = &local_88;
    uVar8 = CONCAT44(uVar10,DAT_1419ff4f8);
    puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_d8,2,uVar8,ppuVar11);
    if (puVar2 != &local_98) {
      local_c8 = *(undefined4 *)puVar2;
      uStack_c4 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_c0 = *(undefined4 *)(puVar2 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_c8);
    }
    local_68 = 0x14;
    (**(code **)(*DAT_141ddefb8 + 8))(DAT_141ddefb8,DAT_141a06458);
    FUN_140e87440(&local_98,DAT_141a06128,0x80000000,&local_48,uVar8 & 0xffffffffffffff00,
                  (ulonglong)ppuVar11 & 0xffffffffffffff00);
    cVar1 = FUN_140e491e0(&local_48);
    if (cVar1 == '\0') {
      local_68 = 0x19;
      uVar6 = 0x3ff00000;
    }
    else {
      local_68 = 0x16;
    }
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  *param_3 = (ulonglong)uVar6 << 0x20;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

