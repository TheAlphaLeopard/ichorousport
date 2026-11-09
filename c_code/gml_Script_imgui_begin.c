// gml_Script_imgui_begin @ 0x1404e3660

undefined8 *
gml_Script_imgui_begin
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  byte local_34;
  
  local_60 = "gml_Script_imgui_text_link";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0xc4a;
  _eh_vector_constructor_iterator_(local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0xc4b;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fb9f8);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_40) goto LAB_1404e375b;
  }
  local_88 = *(undefined4 *)param_5;
  uStack_84 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_80 = *(undefined4 *)(param_5 + 1);
  uStack_7c = *(undefined4 *)((longlong)param_5 + 0xc);
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_40);
  }
  FUN_140041b80(&local_40,&local_88);
LAB_1404e375b:
  local_70 = &local_40;
  puVar2 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_98,1,uVar1,&local_70);
  if (puVar2 != param_3) {
    local_88 = *(undefined4 *)puVar2;
    uStack_84 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_80 = *(undefined4 *)(puVar2 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_88);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

