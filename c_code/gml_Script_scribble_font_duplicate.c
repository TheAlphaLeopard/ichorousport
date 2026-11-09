// gml_Script_scribble_font_duplicate @ 0x14046a620

undefined8 *
gml_Script_scribble_font_duplicate
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  ulonglong uVar7;
  undefined4 uVar9;
  undefined8 uVar8;
  ulonglong in_stack_ffffffffffffff30;
  undefined4 **ppuVar10;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8 [3];
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_34;
  
  local_50 = "gml_Script_scribble_font_delete";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 4;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(local_b8,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_34 = 0xffffff;
  local_40 = 0;
  local_bc = 0;
  local_c8 = 0;
  local_6c = 0;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf058) &&
     (_Init_thread_header(&DAT_141ddf058), DAT_141ddf058 == -1)) {
    DAT_141ddf050 = (longlong *)FUN_140e63aa0(DAT_1419f8b28);
    _Init_thread_footer(&DAT_141ddf058);
  }
  if (DAT_141ddc190 == '\0') {
    FUN_140e64380(DAT_141ddf050,"gml_Script_scribble_font_delete");
    FUN_140e64380(param_1,"gml_Script_scribble_font_delete");
  }
  local_48 = 6;
  if (DAT_141ddc190 == '\0') {
    DAT_141ddc190 = '\x01';
    puVar2 = (undefined8 *)(**(code **)(*DAT_141ddf050 + 0x10))(DAT_141ddf050,DAT_141a06458);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    local_98 = (undefined4)DAT_1419df7b0;
    uStack_94 = DAT_1419df7b0._4_4_;
    uStack_90 = DAT_1419df7b8;
    uStack_8c = DAT_1419df7bc;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_98);
    local_80 = &local_a8;
    ppuVar6 = &local_80;
    uVar3 = gml_Script___scribble_texture_get_material(param_1,param_2,&local_c8,1,ppuVar6);
    uVar7 = (ulonglong)ppuVar6 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_141a06198,0x80000000,&local_68,uVar7,
                  in_stack_ffffffffffffff30 & 0xffffffffffffff00);
    uVar9 = (undefined4)(uVar7 >> 0x20);
    FUN_140e609c0(DAT_141ddf050);
    if (&local_68 != puVar2) {
      local_98 = (undefined4)local_68;
      uStack_94 = local_68._4_4_;
      uStack_90 = uStack_60;
      uStack_8c = uStack_5c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_98);
    }
    FUN_140e60910(1);
  }
  local_48 = 7;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  puVar4 = (undefined4 *)(**(code **)(*DAT_141ddf050 + 8))(DAT_141ddf050,DAT_141a06458);
  if (puVar4 != local_b8) {
    local_98 = *puVar4;
    uStack_94 = puVar4[1];
    uStack_90 = puVar4[2];
    uStack_8c = puVar4[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_98);
  }
  local_88 = local_b8;
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_14046a90d:
    local_98 = *(undefined4 *)puVar5;
    uStack_94 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_90 = *(undefined4 *)(puVar5 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_98);
  }
  else {
    puVar5 = (undefined8 *)*param_5;
    if (puVar5 != &local_a8) goto LAB_14046a90d;
  }
  local_80 = &local_a8;
  uVar8 = CONCAT44(uVar9,DAT_141a01478);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_c8,2,uVar8,&local_88);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_48 = 7;
    goto LAB_14046abe7;
  }
  local_48 = 9;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_78 = 0;
  local_70 = 0;
  local_6c = 5;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  puVar4 = (undefined4 *)(**(code **)(*DAT_141ddf050 + 8))(DAT_141ddf050,DAT_141a06458);
  if (puVar4 != local_b8) {
    local_98 = *puVar4;
    uStack_94 = puVar4[1];
    uStack_90 = puVar4[2];
    uStack_8c = puVar4[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_98);
  }
  local_88 = local_b8;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_14046aa3c:
    local_98 = *(undefined4 *)puVar5;
    uStack_94 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_90 = *(undefined4 *)(puVar5 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_98);
  }
  else {
    puVar5 = (undefined8 *)*param_5;
    if (puVar5 != &local_a8) goto LAB_14046aa3c;
  }
  local_80 = &local_a8;
  ppuVar10 = &local_88;
  uVar7 = CONCAT44(uVar9,DAT_1419ff4f8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_c8,2,uVar7,ppuVar10);
  FUN_140e87440(uVar3,DAT_141a06178,0x80000000,&local_40,uVar7 & 0xffffffffffffff00,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_c8,2,DAT_1419ff4f8,&local_88);
  uVar3 = FUN_140069500(uVar3);
  puVar5 = &local_40;
  FUN_140e63610(uVar3,param_2,&local_78,0,puVar5,0);
  uVar9 = (undefined4)((ulonglong)puVar5 >> 0x20);
  local_48 = 10;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  if (puVar4 != local_b8) {
    local_98 = *puVar4;
    uStack_94 = puVar4[1];
    uStack_90 = puVar4[2];
    uStack_8c = puVar4[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_98);
  }
  local_88 = local_b8;
  if ((param_4 < 1) || (puVar2 = (undefined8 *)*param_5, puVar2 != &local_a8)) {
    local_98 = *(undefined4 *)puVar2;
    uStack_94 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_90 = *(undefined4 *)(puVar2 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_98);
  }
  local_80 = &local_a8;
  FUN_140e634e0(param_1,param_2,&local_c8,2,CONCAT44(uVar9,DAT_141a01f38),&local_88);
LAB_14046abe7:
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_40);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

