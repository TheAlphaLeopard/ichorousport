// gml_Script_anon_3069_Attribute_OFFERINGSINIT @ 0x1403c1850

undefined8 *
gml_Script_anon_3069_Attribute_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@3069@Attribute@OFFERINGSINIT";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 100;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a918);
  uStack_3c = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_40 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) == 0) {
    local_48 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_48,puVar1);
  }
  uStack_2c = 7;
  local_38 = 1;
  FUN_1400460e0(&local_48,&local_38);
  if ((1 << ((byte)uStack_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if (&local_48 != param_3) {
    local_38 = (undefined4)local_48;
    uStack_34 = local_48._4_4_;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_38);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}

