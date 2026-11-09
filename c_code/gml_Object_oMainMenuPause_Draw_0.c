// gml_Object_oMainMenuPause_Draw_0 @ 0x140b51510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oMainMenuPause_Draw_0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *local_res8;
  ulonglong uVar4;
  ulonglong in_stack_ffffffffffffff50;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_60 = "gml_Object_oMainMenuPause_Create_0";
  local_58 = 0;
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  _eh_vector_constructor_iterator_(local_88,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_34 = 0xffffff;
  local_40 = 0;
  local_44 = 0xffffff;
  local_50 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_58 = 2;
  local_98 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_90 = DAT_1419df7b8;
  uStack_8c = DAT_1419df7bc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_98);
  local_res8 = local_88;
  gml_Script_anon_3794____struct___75_anon_2380_BM_NEW_MENU_BYTEMAP_menu_manager
            (param_1,param_2,&local_a8,1,&local_res8);
  local_58 = 3;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uVar4 = 0;
  FUN_14042a190(param_1,param_2,&local_a8,0,0);
  local_58 = 5;
  FUN_140e85f80(param_1,DAT_1419f6b08,0x80000000,&local_40);
  uStack_8c = 0xf;
  local_98 = 0x100000300000045;
  iVar1 = FUN_140e851f0(&local_40,&local_98,DAT_141955260,0);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if (iVar1 == 0) {
    local_58 = 6;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a55440);
    FUN_140e87440(uVar2,DAT_141a55540,0x80000000,&local_50,uVar4 & 0xffffffffffffff00,
                  in_stack_ffffffffffffff50 & 0xffffffffffffff00);
    local_98 = CONCAT44(uRam0000000141dd9abc,_DAT_141dd9ab8);
    uStack_90 = uRam0000000141dd9ac0;
    uStack_8c = DAT_141dd9ac4;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_98);
    local_res8 = local_88;
    uVar2 = FUN_140069500(uVar2);
    FUN_140e63610(uVar2,param_2,&local_a8,1,&local_50,&local_res8);
  }
  local_58 = 9;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_6c = 0;
  local_78 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a7e8,0,&local_78);
  local_58 = 0xb;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a575f0);
  uStack_8c = 0xd;
  local_98 = 0;
  if (&local_98 != puVar3) {
    local_28 = 0;
    uStack_24 = 0;
    uStack_20 = uStack_90;
    uStack_1c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_28);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  if ((1 << ((byte)local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_40);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return;
}

