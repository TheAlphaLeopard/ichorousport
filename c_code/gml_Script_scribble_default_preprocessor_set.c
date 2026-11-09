// gml_Script_scribble_default_preprocessor_set @ 0x140458e20

undefined8 *
gml_Script_scribble_default_preprocessor_set
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 *local_res18;
  code *pcVar4;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_scribble_default_preprocessor_get";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 3;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_68,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_4c = 0;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddef80) {
    _Init_thread_header(&DAT_141ddef80);
    if (DAT_141ddef80 == -1) {
      DAT_141ddef88 = (longlong *)FUN_140e63aa0(DAT_1419f7838);
      _Init_thread_footer(&DAT_141ddef80);
    }
  }
  if (DAT_141ddc183 == '\0') {
    FUN_140e64380(DAT_141ddef88,"gml_Script_scribble_default_preprocessor_get");
    FUN_140e64380(param_1,"gml_Script_scribble_default_preprocessor_get");
  }
  local_28 = 5;
  if (DAT_141ddc183 == '\0') {
    DAT_141ddc183 = '\x01';
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddef88 + 0x10))(DAT_141ddef88,DAT_1419fcb48);
    local_48 = (undefined4)DAT_1419df7b0;
    uStack_44 = DAT_1419df7b0._4_4_;
    uStack_40 = DAT_1419df7b8;
    uStack_3c = DAT_1419df7bc;
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_48);
    local_res18 = local_68;
    FUN_140e609c0(DAT_141ddef88);
    pcVar4 = (code *)&local_res18;
    puVar2 = (undefined4 *)
             gml_Script___scribble_texture_get_material(param_1,param_2,&local_58,1,pcVar4);
    if (puVar2 != puVar1) {
      local_48 = *puVar2;
      uStack_44 = puVar2[1];
      uStack_40 = puVar2[2];
      uStack_3c = puVar2[3];
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_48);
    }
    FUN_140e60910(1);
  }
  local_28 = 7;
  uVar3 = (**(code **)(*DAT_141ddef88 + 8))(DAT_141ddef88,DAT_1419fcb48);
  FUN_140e87440(uVar3,DAT_141a09178,0x80000000,&local_78,(ulonglong)pcVar4 & 0xffffffffffffff00,0);
  if (&local_78 != param_3) {
    local_48 = (undefined4)local_78;
    uStack_44 = local_78._4_4_;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_48);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

