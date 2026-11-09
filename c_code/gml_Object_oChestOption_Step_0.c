// gml_Object_oChestOption_Step_0 @ 0x1408a4060

undefined8 *
gml_Object_oChestOption_Step_0(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 local_res8;
  longlong *local_res10;
  undefined8 *local_res18 [2];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88 [2];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_50 [16];
  longlong local_40;
  
  local_60 = "gml_Script_anon@201@gml_Object_oChestOption_Create_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0xc;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_88,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0xe;
  uStack_6c = 0xf;
  local_78 = 0x100000000000106;
  iVar2 = FUN_140e63cb0(local_50,&local_res8,&local_res10,&local_78);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (0 < iVar2) {
    do {
      local_58 = 0xf;
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      local_98 = 0;
      local_90 = 0;
      local_8c = 5;
      puVar3 = (undefined8 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_141a57b30);
      if (puVar3 != local_88) {
        local_78 = *puVar3;
        uStack_70 = *(undefined4 *)(puVar3 + 1);
        uStack_6c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_88[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_88);
        }
        FUN_140041b80(local_88,&local_78);
      }
      local_res18[0] = local_88;
      gml_Script_rolled_list_add(local_res8,local_res10,&local_98,1,local_res18);
      cVar1 = FUN_140e643f0(local_50,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_50,&local_res8,&local_res10);
  if (local_40 != 0) {
    FUN_140e4cd60();
    local_40 = 0;
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

