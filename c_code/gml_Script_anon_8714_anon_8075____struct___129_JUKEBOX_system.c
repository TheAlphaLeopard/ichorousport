// gml_Script_anon_8714_anon_8075____struct___129_JUKEBOX_system @ 0x14039bde0

undefined8 *
gml_Script_anon_8714_anon_8075____struct___129_JUKEBOX_system
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@8589@anon@8075@___struct___129@JUKEBOX_system";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 299;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4b28);
  if (puVar1 != param_3) {
    local_38 = *(undefined4 *)puVar1;
    uStack_34 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_30 = *(undefined4 *)(puVar1 + 1);
    uStack_2c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

