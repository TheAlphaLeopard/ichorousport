// gml_Script_scribble_font_force_bilinear_filtering @ 0x14046ba90

undefined8 *
gml_Script_scribble_font_force_bilinear_filtering
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 **ppuVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong in_stack_ffffffffffffff50;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 *local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50 [3];
  byte local_44;
  undefined8 local_40;
  byte local_34;
  
  local_60 = "gml_Script_scribble_font_exists";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 4;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf06c) &&
     (_Init_thread_header(&DAT_141ddf06c), DAT_141ddf06c == -1)) {
    DAT_141ddf070 = (longlong *)FUN_140e63aa0(DAT_1419f8b88);
    _Init_thread_footer(&DAT_141ddf06c);
  }
  if (DAT_141ddc192 == '\0') {
    FUN_140e64380(DAT_141ddf070,"gml_Script_scribble_font_exists");
    FUN_140e64380(param_1,"gml_Script_scribble_font_exists");
  }
  local_58 = 6;
  if (DAT_141ddc192 == '\0') {
    DAT_141ddc192 = '\x01';
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddf070 + 0x10))(DAT_141ddf070,DAT_141a06458);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    local_78 = (undefined4)DAT_1419df7b0;
    uStack_74 = DAT_1419df7b0._4_4_;
    uStack_70 = DAT_1419df7b8;
    uStack_6c = DAT_1419df7bc;
    if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_40);
    }
    FUN_140041b80(&local_40,&local_78);
    local_80 = &local_40;
    ppuVar4 = &local_80;
    uVar2 = gml_Script___scribble_texture_get_material(param_1,param_2,&local_a8,1,ppuVar4);
    uVar5 = (ulonglong)ppuVar4 & 0xffffffffffffff00;
    FUN_140e87440(uVar2,DAT_141a06198,0x80000000,&local_98,uVar5,
                  in_stack_ffffffffffffff50 & 0xffffffffffffff00);
    uVar6 = (undefined4)(uVar5 >> 0x20);
    FUN_140e609c0(DAT_141ddf070);
    if (&local_98 != puVar1) {
      local_78 = (undefined4)local_98;
      uStack_74 = local_98._4_4_;
      uStack_70 = uStack_90;
      uStack_6c = uStack_8c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_78);
    }
    FUN_140e60910(1);
  }
  local_58 = 7;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  puVar3 = (undefined4 *)(**(code **)(*DAT_141ddf070 + 8))(DAT_141ddf070,DAT_141a06458);
  if (puVar3 != local_50) {
    local_78 = *puVar3;
    uStack_74 = puVar3[1];
    uStack_70 = puVar3[2];
    uStack_6c = puVar3[3];
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_50);
    }
    FUN_140041b80(local_50,&local_78);
  }
  local_88 = local_50;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_40) goto LAB_14046bd93;
  }
  local_78 = *(undefined4 *)param_5;
  uStack_74 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_70 = *(undefined4 *)(param_5 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_5 + 0xc);
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_40);
  }
  FUN_140041b80(&local_40,&local_78);
LAB_14046bd93:
  local_80 = &local_40;
  puVar1 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_a8,2,CONCAT44(uVar6,DAT_141a01478),&local_88);
  if (puVar1 != param_3) {
    local_78 = *(undefined4 *)puVar1;
    uStack_74 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_70 = *(undefined4 *)(puVar1 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_78);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

