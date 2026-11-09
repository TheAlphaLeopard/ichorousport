// gml_Script_anon_648_gml_Object_sys_imgui_Create_0 @ 0x140e39910

undefined8 *
gml_Script_anon_648_gml_Object_sys_imgui_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_60 [16];
  undefined4 local_50 [3];
  byte local_44;
  undefined8 local_40;
  byte local_34;
  undefined4 *local_28;
  undefined8 *local_20;
  
  local_70 = "gml_Script_anon@72@gml_Object_sys_imgui_Create_0";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 6;
  uVar2 = 1;
  _eh_vector_constructor_iterator_(local_60,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 7;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04058);
  if (puVar1 != local_50) {
    local_88 = *puVar1;
    uStack_84 = puVar1[1];
    uStack_80 = puVar1[2];
    uStack_7c = puVar1[3];
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_50);
    }
    FUN_140041b80(local_50,&local_88);
  }
  local_28 = local_50;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_40) goto LAB_140e39a45;
  }
  local_88 = *(undefined4 *)param_5;
  uStack_84 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_80 = *(undefined4 *)(param_5 + 1);
  uStack_7c = *(undefined4 *)((longlong)param_5 + 0xc);
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_40);
  }
  FUN_140041b80(&local_40,&local_88);
LAB_140e39a45:
  local_20 = &local_40;
  FUN_140e634e0(param_1,param_2,&local_98,2,CONCAT44(uVar2,DAT_1419fe568),&local_28);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

