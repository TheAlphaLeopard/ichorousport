// gml_Script_anon_157_gml_Object_oEnemySlime_Other_76 @ 0x140a7f1f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_157_gml_Object_oEnemySlime_Other_76(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined8 local_30;
  char *local_28;
  undefined4 local_20;
  
  local_28 = "gml_Object_oEnemySlime_Other_76";
  local_20 = 0;
  local_30 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_30;
  _eh_vector_constructor_iterator_(local_78,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_20 = 2;
  local_98 = _DAT_141dd8fc8;
  uStack_94 = uRam0000000141dd8fcc;
  uStack_90 = uRam0000000141dd8fd0;
  uStack_8c = DAT_141dd8fd4;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_98);
  local_48 = local_78;
  FUN_140e645a0(&local_98,gml_Object_oEnemySlime_Draw_0,param_1);
  local_88 = local_98;
  uStack_84 = uStack_94;
  uStack_80 = uStack_90;
  uStack_7c = uStack_8c;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_88);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_40 = local_68;
  local_88 = (undefined4)DAT_1419df7b0;
  uStack_84 = DAT_1419df7b0._4_4_;
  uStack_80 = DAT_1419df7b8;
  uStack_7c = DAT_1419df7bc;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_88);
  local_38 = local_58;
  gml_Script_StatesBodyBagIdle(param_1,param_2,&local_a8,3,&local_48);
  local_20 = 6;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_88 = _DAT_141dd8fb8;
  uStack_84 = uRam0000000141dd8fbc;
  uStack_80 = uRam0000000141dd8fc0;
  uStack_7c = DAT_141dd8fc4;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_88);
  local_48 = local_78;
  FUN_140e645a0(&local_98,gml_Object_oEnemySpider_Create_0,param_1);
  local_88 = local_98;
  uStack_84 = uStack_94;
  uStack_80 = uStack_90;
  uStack_7c = uStack_8c;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_88);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_40 = local_68;
  local_88 = (undefined4)DAT_1419df7b0;
  uStack_84 = DAT_1419df7b0._4_4_;
  uStack_80 = DAT_1419df7b8;
  uStack_7c = DAT_1419df7bc;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_88);
  local_38 = local_58;
  gml_Script_StatesBodyBagIdle(param_1,param_2,&local_a8,3,&local_48);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_30;
  return;
}

