// gml_Script_anon_1771_anon_1235____struct___555_gml_Object_oEntity_Create_0 @ 0x140aa8890

longlong *
gml_Script_anon_1771_anon_1235____struct___555_gml_Object_oEntity_Create_0
          (longlong *param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@1063@___struct___555@gml_Object_oEntity_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0x48;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef568);
  local_3c = 0;
  uVar5 = 0;
  local_48 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x49;
  bVar4 = false;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5878);
  uVar3 = FUN_140e63610(param_1,param_2,&local_48,0,uVar3,0);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    cVar1 = FUN_140e491e0(uVar2);
    bVar4 = cVar1 == '\0';
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (bVar4) {
    uVar5 = 0x3ff00000;
  }
  *param_3 = (ulonglong)uVar5 << 0x20;
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

