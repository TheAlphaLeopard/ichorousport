// gml_Script_anon_1063____struct___555_gml_Object_oEntity_Create_0 @ 0x140aa8770

undefined8 *
gml_Script_anon_1063____struct___555_gml_Object_oEntity_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@983@___struct___555@gml_Object_oEntity_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x44;
  cVar1 = '\0';
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1dce0);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5fa8);
  iVar2 = FUN_140e851f0(uVar3,uVar4,DAT_141955260,1);
  if (0 < iVar2) {
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09638);
    cVar1 = FUN_140e491e0(uVar3);
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x3ff0000000000000;
  }
  *param_3 = uVar3;
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

