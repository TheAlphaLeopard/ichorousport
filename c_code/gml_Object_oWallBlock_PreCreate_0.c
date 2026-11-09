// gml_Object_oWallBlock_PreCreate_0 @ 0x140e20f30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oWallBlock_PreCreate_0(longlong *param_1)

{
  undefined *puVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oWall_PreCreate_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 1;
  FUN_140e98b30();
  local_18 = 2;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a585c0);
  if (puVar1 != &DAT_141ddbe28) {
    local_38 = _DAT_141ddbe28;
    uStack_34 = uRam0000000141ddbe2c;
    uStack_30 = uRam0000000141ddbe30;
    uStack_2c = DAT_141ddbe34;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

