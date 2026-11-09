// gml_Script_anon_76_gml_Object_oBreakablePitBonePile_Create_0 @ 0x14085e240

void gml_Script_anon_76_gml_Object_oBreakablePitBonePile_Create_0(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Object_oBreakableParticle_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 3;
  FUN_140e98b30();
  local_28 = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdaf8);
  uVar1 = FUN_140e78f00(1);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = uVar1;
  DAT_141dc7a50 = (undefined8 *)local_38;
  return;
}

