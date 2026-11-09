// gml_Script____struct___214_scribble_external_font_add_scribble_external_font_add @ 0x140459200

undefined8 *
gml_Script____struct___214_scribble_external_font_add_scribble_external_font_add
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [12];
  byte local_34;
  
  local_60 = "gml_Script_scribble_default_preprocessor_set";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 5;
  _eh_vector_constructor_iterator_(local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddef90) &&
     (_Init_thread_header(&DAT_141ddef90), DAT_141ddef90 == -1)) {
    DAT_141ddef98 = (longlong *)FUN_140e63aa0(DAT_1419f7848);
    _Init_thread_footer(&DAT_141ddef90);
  }
  if (DAT_141ddc184 == '\0') {
    FUN_140e64380(DAT_141ddef98,"gml_Script_scribble_default_preprocessor_set");
    FUN_140e64380(param_1,"gml_Script_scribble_default_preprocessor_set");
  }
  local_58 = 7;
  if (DAT_141ddc184 == '\0') {
    DAT_141ddc184 = '\x01';
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddef98 + 0x10))(DAT_141ddef98,DAT_1419fcb48);
    local_88 = (undefined4)DAT_1419df7b0;
    uStack_84 = DAT_1419df7b0._4_4_;
    uStack_80 = DAT_1419df7b8;
    uStack_7c = DAT_1419df7bc;
    if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_40);
    }
    FUN_140041b80(local_40,&local_88);
    local_70 = local_40;
    FUN_140e609c0(DAT_141ddef98);
    puVar2 = (undefined4 *)
             gml_Script___scribble_texture_get_material(param_1,param_2,&local_98,1,&local_70);
    if (puVar2 != puVar1) {
      local_88 = *puVar2;
      uStack_84 = puVar2[1];
      uStack_80 = puVar2[2];
      uStack_7c = puVar2[3];
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_88);
    }
    FUN_140e60910(1);
  }
  local_58 = 9;
  uVar3 = (**(code **)(*DAT_141ddef98 + 8))(DAT_141ddef98,DAT_1419fcb48);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_a8) goto LAB_140459450;
  }
  local_88 = *(undefined4 *)param_5;
  uStack_84 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_80 = *(undefined4 *)(param_5 + 1);
  uStack_7c = *(undefined4 *)((longlong)param_5 + 0xc);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_88);
LAB_140459450:
  FUN_140e87930(uVar3,DAT_141a09178,0x80000000,&local_a8);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

