// gml_Script_anon_411_gml_Object_oButtonSetGameplay_Create_0 @ 0x1408753a0

undefined8 *
gml_Script_anon_411_gml_Object_oButtonSetGameplay_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong in_stack_ffffffffffffff78;
  ulonglong in_stack_ffffffffffffff80;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@170@gml_Object_oButtonSetGameplay_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_6c = 0xffffff;
  local_78 = 0;
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0xc;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(0,DAT_141a0d828);
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
  }
  FUN_140e87440(puVar4,DAT_141a0aa28,0x80000000,&local_78,
                in_stack_ffffffffffffff78 & 0xffffffffffffff00,
                in_stack_ffffffffffffff80 & 0xffffffffffffff00);
  FUN_140e609c0(param_1);
  if (0 < param_4) {
    puVar5 = (undefined8 *)*param_5;
  }
  uVar2 = FUN_140069500(puVar5);
  puVar3 = (undefined4 *)FUN_140e63610(uVar2,param_2,&local_68,0,&local_78,0);
  if (puVar3 != puVar1) {
    local_58 = *puVar3;
    uStack_54 = puVar3[1];
    uStack_50 = puVar3[2];
    uStack_4c = puVar3[3];
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

