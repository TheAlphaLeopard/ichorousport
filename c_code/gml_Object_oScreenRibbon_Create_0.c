// gml_Object_oScreenRibbon_Create_0 @ 0x140d63ee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oScreenRibbon_Create_0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_78;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_30 [12];
  byte local_24;
  undefined1 local_20 [12];
  byte local_14;
  
  local_40 = "gml_Object_oScreenRedEffect_Alarm_0";
  local_38 = 0;
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  _eh_vector_constructor_iterator_(local_30,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_6c = 0xffffff;
  local_78 = 0;
  local_38 = 4;
  uStack_60 = (undefined1 *)CONCAT44(0xf,(undefined4)uStack_60);
  local_68 = (undefined1 *)0x100000100000013;
  local_58 = 0x13;
  uStack_54 = 0x1000001;
  uStack_50 = (undefined4)uStack_60;
  uStack_4c = 0xf;
  if ((1 << (local_24 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_30);
  }
  FUN_140041b80(local_30,&local_58);
  local_68 = local_30;
  local_58 = _DAT_1419edb70;
  uStack_54 = uRam00000001419edb74;
  uStack_50 = uRam00000001419edb78;
  uStack_4c = uRam00000001419edb7c;
  if ((1 << (local_14 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_20);
  }
  FUN_140041b80(local_20,&local_58);
  uStack_60 = local_20;
  FUN_1403a1810(param_1,param_2,&local_78,2,&local_68);
  local_38 = 6;
  FUN_140edd0e0(param_1,param_2,0,0);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_30,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return;
}

