// gml_Script_anon_813_anon_763_gml_Object_oButtonSet_Create_0 @ 0x14086be60

undefined8 *
gml_Script_anon_813_anon_763_gml_Object_oButtonSet_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong in_stack_ffffffffffffff68;
  ulonglong in_stack_ffffffffffffff70;
  ulonglong uVar7;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
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
  
  local_40 = "gml_Script_anon@241@gml_Object_oButtonSet_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0xf;
  local_6c = 0xffffff;
  local_78 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  puVar1 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1d980);
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x11;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0d828);
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  FUN_140e87440(puVar5,DAT_141a0aa28,0x80000000,&local_78,
                in_stack_ffffffffffffff68 & 0xffffffffffffff00,
                in_stack_ffffffffffffff70 & 0xffffffffffffff00);
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  uVar3 = FUN_140069500(puVar5);
  uVar7 = 0;
  puVar5 = &local_78;
  puVar4 = (undefined4 *)FUN_140e63610(uVar3,param_2,&local_68,0,puVar5,0);
  if (puVar4 != puVar2) {
    local_58 = *puVar4;
    uStack_54 = puVar4[1];
    uStack_50 = puVar4[2];
    uStack_4c = puVar4[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x12;
  if (0 < param_4) {
    puVar6 = (undefined8 *)*param_5;
  }
  FUN_140e87440(puVar6,DAT_141a0d828,0x80000000,&local_88,(ulonglong)puVar5 & 0xffffffffffffff00,
                uVar7 & 0xffffffffffffff00);
  FUN_140e609c0(DAT_141a729d8);
  if (&local_88 != puVar1) {
    local_58 = (undefined4)local_88;
    uStack_54 = local_88._4_4_;
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

