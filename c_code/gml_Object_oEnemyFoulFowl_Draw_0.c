// gml_Object_oEnemyFoulFowl_Draw_0 @ 0x1409d8250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oEnemyFoulFowl_Draw_0(undefined8 param_1,undefined8 param_2)

{
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  undefined1 *local_20;
  undefined1 *local_18;
  undefined1 *local_10;
  
  local_30 = "gml_Object_oEnemyFoulFowl_Other_76";
  local_28 = 0;
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  _eh_vector_constructor_iterator_(local_78,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_28 = 2;
  local_98 = _DAT_141dd8a78;
  uStack_94 = uRam0000000141dd8a7c;
  uStack_90 = uRam0000000141dd8a80;
  uStack_8c = DAT_141dd8a84;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_98);
  local_20 = local_78;
  FUN_140e645a0(&local_98,gml_Object_oEnemyFreezeOverlay_Create_0,param_1);
  local_48 = local_98;
  uStack_44 = uStack_94;
  uStack_40 = uStack_90;
  uStack_3c = uStack_8c;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_48);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_18 = local_68;
  local_48 = (undefined4)DAT_1419df7b0;
  uStack_44 = DAT_1419df7b0._4_4_;
  uStack_40 = DAT_1419df7b8;
  uStack_3c = DAT_1419df7bc;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_48);
  local_10 = local_58;
  gml_Script_StatesBodyBagIdle(param_1,param_2,&local_88,3,&local_20);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return;
}

