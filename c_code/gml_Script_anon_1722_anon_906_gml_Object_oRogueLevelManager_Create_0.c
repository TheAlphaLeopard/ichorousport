// gml_Script_anon_1722_anon_906_gml_Object_oRogueLevelManager_Create_0 @ 0x140cb65f0

undefined8 *
gml_Script_anon_1722_anon_906_gml_Object_oRogueLevelManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_50 [12];
  byte local_44;
  undefined1 local_40 [12];
  byte local_34;
  
  local_60 = "gml_Script_anon@1051@anon@906@gml_Object_oRogueLevelManager_Create_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x35;
  _eh_vector_constructor_iterator_(local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x37;
  local_78 = (undefined4)DAT_1419df7b0;
  uStack_74 = DAT_1419df7b0._4_4_;
  uStack_70 = DAT_1419df7b8;
  uStack_6c = DAT_1419df7bc;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_78);
  local_88 = local_50;
  local_78 = (undefined4)DAT_1419df7b0;
  uStack_74 = DAT_1419df7b0._4_4_;
  uStack_70 = DAT_1419df7b8;
  uStack_6c = DAT_1419df7bc;
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_40);
  }
  FUN_140041b80(local_40,&local_78);
  local_80 = local_40;
  uVar2 = gml_Script_animcurve_lerp(param_1,param_2,&local_a8,2,&local_88);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 != '\0') {
    local_58 = 0x39;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_8c = 0;
    local_98 = 0;
    FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_98);
  }
  local_58 = 0x3d;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a03228);
  FUN_140e63610(param_1,param_2,&local_a8,0,uVar2,0);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

