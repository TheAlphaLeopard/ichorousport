// gml_Script____struct___575_gml_Object_oHitable_Create_0 @ 0x140b09230

undefined8 *
gml_Script____struct___575_gml_Object_oHitable_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script____struct___574@gml_Object_oHitable_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x28;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de287c) {
    _Init_thread_header(&DAT_141de287c);
    if (DAT_141de287c == -1) {
      DAT_141de2868 = FUN_140e63aa0(DAT_1419f3638);
      _Init_thread_footer(&DAT_141de287c);
    }
  }
  FUN_140e643a0(param_1,DAT_141de2868);
  local_38 = 0x2a;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff808);
  FUN_140e609c0(param_1);
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
  }
  if (puVar2 != puVar1) {
    local_68 = *(undefined4 *)puVar2;
    uStack_64 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_60 = *(undefined4 *)(puVar2 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x2b;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_38 = 0x2c;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_38 = 0x2d;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09708);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3fd999999999999a;
  local_38 = 0x2e;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a097f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3fd999999999999a;
  local_38 = 0x2f;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2888);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3fa999999999999a;
  local_38 = 0x30;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3608);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4034000000000000;
  local_38 = 0x32;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2848);
  FUN_140e609c0(param_1);
  if (1 < param_4) {
    puVar4 = (undefined8 *)param_5[1];
  }
  if (puVar4 != puVar1) {
    local_68 = *(undefined4 *)puVar4;
    uStack_64 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_60 = *(undefined4 *)(puVar4 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x34;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04b58);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Script_anon_1027____struct___574_gml_Object_oHitable_Create_0,param_1)
  ;
  if (&local_68 != puVar3) {
    local_58 = local_68;
    uStack_54 = uStack_64;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x39;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f26e8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Script_anon_1400____struct___574_gml_Object_oHitable_Create_0,param_1)
  ;
  if (&local_68 != puVar3) {
    local_58 = local_68;
    uStack_54 = uStack_64;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x44;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57310);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Script_anon_1598____struct___574_gml_Object_oHitable_Create_0,param_1)
  ;
  if (&local_68 != puVar3) {
    local_58 = local_68;
    uStack_54 = uStack_64;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x4b;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57340);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Script____struct___574_gml_Object_oHitable_Create_0,param_1);
  if (&local_68 != puVar3) {
    local_58 = local_68;
    uStack_54 = uStack_64;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x52;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06298);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Script_anon_1776____struct___575_gml_Object_oHitable_Create_0,param_1)
  ;
  if (&local_68 != puVar3) {
    local_58 = local_68;
    uStack_54 = uStack_64;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

