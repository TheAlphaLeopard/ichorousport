// gml_Script____struct___563_anon_13914_gml_Object_oEntity_Create_0 @ 0x140aba700

undefined8 *
gml_Script____struct___563_anon_13914_gml_Object_oEntity_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@13622@gml_Object_oEntity_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x27e;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f090);
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  FUN_1400460e0(puVar1,param_5);
  FUN_140e60910(1);
  local_28 = 0x27f;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5a58);
  if ((*(uint *)((longlong)puVar3 + 0xc) & 0xffffff) == 0) {
    uVar4 = (undefined4)*puVar3;
  }
  else {
    uVar4 = FUN_140e4b060(puVar3);
  }
  if ((*(uint *)((longlong)puVar2 + 0xc) & 0xffffff) == 0) {
    uVar5 = *puVar2;
  }
  else {
    uVar5 = FUN_140e4b060(puVar2);
  }
  uVar5 = FUN_140e78ec0(uVar5,0,uVar4);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = uVar5;
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

