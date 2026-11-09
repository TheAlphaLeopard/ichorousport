// gml_Script___get_page_array_anon_7850___scribble_class_model___scribble_class_model @ 0x14014d760

undefined8 *
gml_Script___get_page_array_anon_7850___scribble_class_model___scribble_class_model
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script___get_width@anon@7630@__scribble_class_model@__scribble_class_model";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0xd5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a060b8);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe278);
  uStack_3c = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_40 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) == 0) {
    local_48 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_48,puVar1);
  }
  FUN_140042560(&local_48,uVar2);
  if (&local_48 != param_3) {
    local_38 = (undefined4)local_48;
    uStack_34 = local_48._4_4_;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_38);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

