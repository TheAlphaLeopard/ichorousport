// gml_Script_anon_16276_gml_Object_oRogueLevelManager_Other_12 @ 0x140d167a0

undefined8 *
gml_Script_anon_16276_gml_Object_oRogueLevelManager_Other_12
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@16578@anon@16276@gml_Object_oRogueLevelManager_Other_12";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_3c = 0xffffff;
  local_48 = 0;
  local_2c = 0xffffff;
  local_38 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x23b;
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 1) {
    FUN_140e87440(&DAT_1419df7b0,DAT_141a58020,0x80000000,&local_48,0,0);
  }
  else {
    FUN_140e87440(*param_5,DAT_141a58020,0x80000000,&local_48,0,0);
    if (1 < param_4) {
      puVar2 = (undefined8 *)param_5[1];
    }
  }
  FUN_140e87440(puVar2,DAT_141a58020,0x80000000,&local_38,0,0);
  iVar1 = FUN_140e851f0(&local_48,&local_38,DAT_141955260,1);
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (iVar1 == -2 || -1 < iVar1) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x3ff0000000000000;
  }
  *param_3 = uVar3;
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

