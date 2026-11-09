// gml_Script_anon_2027____struct___594_gml_Object_oParChest_Create_0 @ 0x140ba4e60

undefined8 *
gml_Script_anon_2027____struct___594_gml_Object_oParChest_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@1926@___struct___593@gml_Object_oParChest_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0x58;
  puVar1 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_3c = 0xffffff;
  local_48 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x5b;
  if (puVar1 != &local_48) {
    local_38 = *(undefined4 *)puVar1;
    uStack_34 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_30 = *(undefined4 *)(puVar1 + 1);
    uStack_2c = *(undefined4 *)((longlong)puVar1 + 0xc);
    FUN_140041b80(&local_48,&local_38);
  }
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_48);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

