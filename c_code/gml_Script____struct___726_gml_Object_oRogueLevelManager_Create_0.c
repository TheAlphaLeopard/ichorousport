// gml_Script____struct___726_gml_Object_oRogueLevelManager_Create_0 @ 0x140cbc980

undefined8 *
gml_Script____struct___726_gml_Object_oRogueLevelManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
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
  
  local_40 = "gml_Script____struct___725@gml_Object_oRogueLevelManager_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x78;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de3160) {
    _Init_thread_header(&DAT_141de3160);
    if (DAT_141de3160 == -1) {
      DAT_141de31d8 = FUN_140e63aa0(DAT_1419f9cf8);
      _Init_thread_footer(&DAT_141de3160);
    }
  }
  FUN_140e643a0(param_1,DAT_141de31d8);
  local_38 = 0x7a;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9e18);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0xc010000000000000;
  local_38 = 0x7b;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9a68);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_38 = 0x7c;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fa0c8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4014000000000000;
  local_38 = 0x7d;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9a48);
  FUN_140e609c0(param_1);
  puVar1 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
  }
  if (puVar3 != puVar2) {
    local_68 = *(undefined4 *)puVar3;
    uStack_64 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_60 = *(undefined4 *)(puVar3 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x7e;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f98d8);
  FUN_140e609c0(param_1);
  if (param_4 < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[1];
  }
  if (puVar3 != puVar2) {
    local_68 = *(undefined4 *)puVar3;
    uStack_64 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_60 = *(undefined4 *)(puVar3 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x7f;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9e58);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x4010000000000000;
  local_38 = 0x81;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9fd8);
  FUN_140e609c0(param_1);
  if (2 < param_4) {
    puVar1 = (undefined8 *)param_5[2];
  }
  if (puVar1 != puVar2) {
    local_68 = *(undefined4 *)puVar1;
    uStack_64 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_60 = *(undefined4 *)(puVar1 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x88;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a570f0);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,
                gml_Script_anon_3910____struct___725_gml_Object_oRogueLevelManager_Create_0,param_1)
  ;
  if (&local_68 != puVar4) {
    local_58 = local_68;
    uStack_54 = uStack_64;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0xac;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05028);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,
                gml_Script_anon_2395____struct___726_gml_Object_oRogueLevelManager_Create_0,param_1)
  ;
  if (&local_68 != puVar4) {
    local_58 = local_68;
    uStack_54 = uStack_64;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

