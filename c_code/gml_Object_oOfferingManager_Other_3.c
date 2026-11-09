// gml_Object_oOfferingManager_Other_3 @ 0x140b8af90

undefined8 *
gml_Object_oOfferingManager_Other_3
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  undefined8 *puVar1;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  byte local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 *local_20;
  
  local_80 = "gml_Script_anon@4346@anon@1205@gml_Object_oOfferingManager_Other_10";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0xb6;
  _eh_vector_constructor_iterator_(local_70,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0xb7;
  if (param_4 < 2) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = *(undefined8 **)(param_5 + 8);
    if (puVar1 == &local_50) goto LAB_140b8b08c;
  }
  local_40 = *(undefined4 *)puVar1;
  uStack_3c = *(undefined4 *)((longlong)puVar1 + 4);
  uStack_38 = *(undefined4 *)(puVar1 + 1);
  uStack_34 = *(undefined4 *)((longlong)puVar1 + 0xc);
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  FUN_140041b80(&local_50,&local_40);
LAB_140b8b08c:
  local_20 = &local_50;
  gml_Script_rolled_list_add(param_1,param_2,&local_98,1,&local_20);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

