// gml_Script_anon_534_gml_Object_oEnemyFoulFowl_Create_0 @ 0x1409cbb10

longlong *
gml_Script_anon_534_gml_Object_oEnemyFoulFowl_Create_0
          (longlong *param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  double dVar5;
  uint uVar6;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@353@gml_Object_oEnemyFoulFowl_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_5c = 0;
  uVar6 = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x10;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  if ((*(uint *)((longlong)puVar3 + 0xc) & 0xffffff) == 0) {
    uVar4 = *puVar3;
  }
  else {
    uVar4 = FUN_140e4b060(puVar3);
  }
  dVar5 = (double)FUN_140e78d00(uVar4);
  if (DAT_141955260 < dVar5 - 0.05) {
    cVar1 = '\0';
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    local_4c = 0;
    local_58 = 0;
    uVar2 = FUN_140e851f0(uVar4,&local_58,DAT_141955260,1);
    if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_58);
    }
    if (uVar2 < 0x80000000) {
      if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      local_68 = 0;
      local_60 = 0;
      local_5c = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff968);
      uVar4 = FUN_140e63610(param_1,param_2,&local_68,0,uVar4,0);
      cVar1 = FUN_140e491e0(uVar4);
    }
  }
  else {
    cVar1 = '\x01';
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (cVar1 != '\0') {
    uVar6 = 0x3ff00000;
  }
  *param_3 = (ulonglong)uVar6 << 0x20;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

