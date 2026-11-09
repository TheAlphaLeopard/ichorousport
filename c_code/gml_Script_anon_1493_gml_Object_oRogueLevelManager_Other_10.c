// gml_Script_anon_1493_gml_Object_oRogueLevelManager_Other_10 @ 0x140cdd7c0

undefined8 *
gml_Script_anon_1493_gml_Object_oRogueLevelManager_Other_10
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  double dVar5;
  double dVar6;
  double local_98;
  uint local_8c;
  double local_88;
  uint local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_anon@1341@gml_Object_oRogueLevelManager_Other_10";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_7c = 0xffffff;
  local_88 = 0.0;
  local_8c = 0xffffff;
  local_98 = 0.0;
  local_6c = 0;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x3e;
  uVar2 = (**(code **)(*param_1 + 8))(0,DAT_141a57b10);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5eb8);
  FUN_140e87170(uVar3,DAT_1419fe0e8,0x80000000,&local_88,param_1,param_2);
  FUN_140e87170(uVar3,DAT_1419fe158,0x80000000,&local_98,param_1,param_2);
  dVar5 = local_98;
  if ((local_8c & 0xffffff) != 0) {
    dVar5 = (double)FUN_140e4b060(&local_98);
  }
  dVar6 = local_88;
  if ((local_7c & 0xffffff) != 0) {
    dVar6 = (double)FUN_140e4b060(&local_88);
  }
  uVar1 = FUN_140e4a740(uVar2);
  puVar4 = (undefined8 *)FUN_140ea8b20(&local_78,uVar1,(longlong)dVar6,(longlong)dVar5);
  if (puVar4 != param_3) {
    local_68 = *(undefined4 *)puVar4;
    uStack_64 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_60 = *(undefined4 *)(puVar4 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_68);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

