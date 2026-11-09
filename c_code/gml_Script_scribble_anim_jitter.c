// gml_Script_scribble_anim_jitter @ 0x140452b80

undefined8 *
gml_Script_scribble_anim_jitter(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *local_res18 [2];
  code *pcVar3;
  undefined1 **ppuVar4;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_scribble_anim_get_disabled";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 3;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_68,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddeee0) {
    _Init_thread_header(&DAT_141ddeee0);
    if (DAT_141ddeee0 == -1) {
      DAT_141ddeee8 = (longlong *)FUN_140e63aa0(DAT_1419f76c8);
      _Init_thread_footer(&DAT_141ddeee0);
    }
  }
  if (DAT_141ddc178 == '\0') {
    FUN_140e64380(DAT_141ddeee8,"gml_Script_scribble_anim_get_disabled");
    FUN_140e64380(param_1,"gml_Script_scribble_anim_get_disabled");
  }
  local_38 = 5;
  if (DAT_141ddc178 == '\0') {
    DAT_141ddc178 = '\x01';
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddeee8 + 0x10))(DAT_141ddeee8,DAT_141a04cd8);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_98 = 0;
    local_90 = 0;
    local_8c = 5;
    local_58 = (undefined4)DAT_1419df7b0;
    uStack_54 = DAT_1419df7b0._4_4_;
    uStack_50 = DAT_1419df7b8;
    uStack_4c = DAT_1419df7bc;
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_58);
    local_res18[0] = local_68;
    ppuVar4 = local_res18;
    uVar2 = gml_Script___scribble_texture_get_material(param_1,param_2,&local_98,1,ppuVar4);
    pcVar3 = (code *)((ulonglong)ppuVar4 & 0xffffffffffffff00);
    FUN_140e87440(uVar2,DAT_141a05158,0x80000000,&local_78,pcVar3,0);
    FUN_140e609c0(DAT_141ddeee8);
    if (&local_78 != puVar1) {
      local_58 = (undefined4)local_78;
      uStack_54 = local_78._4_4_;
      uStack_50 = uStack_70;
      uStack_4c = uStack_6c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_58);
    }
    FUN_140e60910(1);
  }
  local_38 = 7;
  uVar2 = (**(code **)(*DAT_141ddeee8 + 8))(DAT_141ddeee8,DAT_141a04cd8);
  FUN_140e87440(uVar2,DAT_141a05d28,0x80000000,&local_88,(ulonglong)pcVar3 & 0xffffffffffffff00,0);
  if (&local_88 != param_3) {
    local_58 = (undefined4)local_88;
    uStack_54 = local_88._4_4_;
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_58);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

