// gml_Object_sys_imgui_Draw_75 @ 0x140e3b6d0

void gml_Object_sys_imgui_Draw_75(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 local_88;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  undefined1 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined4 local_30 [3];
  byte local_24;
  undefined1 local_20 [12];
  byte local_14;
  
  local_40 = "gml_Object_sys_imgui_Step_0";
  local_38 = 0;
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  uVar2 = 1;
  _eh_vector_constructor_iterator_(local_30,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_38 = 2;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04058);
  if (puVar1 != local_30) {
    local_78 = *puVar1;
    uStack_74 = puVar1[1];
    uStack_70 = puVar1[2];
    uStack_6c = puVar1[3];
    if ((1 << (local_24 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_30);
    }
    FUN_140041b80(local_30,&local_78);
  }
  local_68 = local_30;
  FUN_140e645a0(&local_78,gml_Script_anon_40_6419_40_gml_Object_oEnemyDamsel_Create_0,param_1);
  local_58 = local_78;
  uStack_54 = uStack_74;
  uStack_50 = uStack_70;
  uStack_4c = uStack_6c;
  if ((1 << (local_14 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_20);
  }
  FUN_140041b80(local_20,&local_58);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_60 = local_20;
  FUN_140e634e0(param_1,param_2,&local_88,2,CONCAT44(uVar2,DAT_141a01f58),&local_68);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_30,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return;
}

