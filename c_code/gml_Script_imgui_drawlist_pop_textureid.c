// gml_Script_imgui_drawlist_pop_textureid @ 0x1404c06d0

undefined8 *
gml_Script_imgui_drawlist_pop_textureid
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 local_88;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  byte local_24;
  
  local_50 = "gml_Script_imgui_drawlist_pop_clip_rect";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x566;
  _eh_vector_constructor_iterator_(local_40,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x567;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_30) goto LAB_1404c07b8;
  }
  local_78 = *(undefined4 *)param_5;
  uStack_74 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_70 = *(undefined4 *)(param_5 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_5 + 0xc);
  if ((1 << (local_24 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_30);
  }
  FUN_140041b80(&local_30,&local_78);
LAB_1404c07b8:
  local_60 = &local_30;
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_88,1,DAT_141a59730,&local_60);
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
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_40,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

