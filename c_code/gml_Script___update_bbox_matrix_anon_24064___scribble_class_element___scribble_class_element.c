// gml_Script___update_bbox_matrix_anon_24064___scribble_class_element___scribble_class_element @ 0x14011d4a0

undefined8 *
gml_Script___update_bbox_matrix_anon_24064___scribble_class_element___scribble_class_element
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_60 [12];
  byte local_54;
  undefined1 local_50 [12];
  byte local_44;
  undefined1 local_40 [12];
  byte local_34;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  
  local_70 = "gml_Script_region_clear@anon@23579@__scribble_class_element@__scribble_class_element";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x2f9;
  _eh_vector_constructor_iterator_(local_60,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x2fb;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a056b8);
  local_98 = (undefined4)DAT_1419df7b0;
  uStack_94 = DAT_1419df7b0._4_4_;
  uStack_90 = DAT_1419df7b8;
  uStack_8c = DAT_1419df7bc;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_98);
  local_30 = local_60;
  local_98 = (undefined4)DAT_1419df7b0;
  uStack_94 = DAT_1419df7b0._4_4_;
  uStack_90 = DAT_1419df7b8;
  uStack_8c = DAT_1419df7bc;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_98);
  local_28 = local_50;
  local_98 = (undefined4)DAT_1419df7b0;
  uStack_94 = DAT_1419df7b0._4_4_;
  uStack_90 = DAT_1419df7b8;
  uStack_8c = DAT_1419df7bc;
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_40);
  }
  FUN_140041b80(local_40,&local_98);
  local_20 = local_40;
  FUN_140e63610(param_1,param_2,&local_88,3,uVar1,&local_30);
  local_68 = 0x2fc;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar1 = FUN_140e5c910();
  FUN_140e42c10(uVar1,param_1);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

