// gml_Object_oCredits_Draw_0 @ 0x1408d0ca0

undefined8 *
gml_Object_oCredits_Draw_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@29@gml_Object_oCredits_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 2;
  local_4c = 0;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de1e08) {
    _Init_thread_header(&DAT_141de1e08);
    if (DAT_141de1e08 == -1) {
      DAT_141de1e18 = FUN_140e63aa0(DAT_141a58140);
      _Init_thread_footer(&DAT_141de1e08);
    }
  }
  FUN_140e643a0(param_1,DAT_141de1e18);
  local_28 = 4;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05b88);
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  if (param_5 != puVar1) {
    local_68 = *(undefined4 *)param_5;
    uStack_64 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_60 = *(undefined4 *)(param_5 + 1);
    uStack_5c = *(undefined4 *)((longlong)param_5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  FUN_140e60910(1);
  local_28 = 5;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58190);
  FUN_140e609c0(param_1);
  puVar3 = (undefined4 *)FUN_140e8da20(&local_58,param_1,0);
  if (puVar3 != puVar2) {
    local_68 = *puVar3;
    uStack_64 = puVar3[1];
    uStack_60 = puVar3[2];
    uStack_5c = puVar3[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_68);
  }
  FUN_140e60910(1);
  local_28 = 6;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a718);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_28 = 7;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09ec8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0xc024000000000000;
  local_28 = 9;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58170);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Script_anon_29_gml_Object_oCredits_Create_0,0);
  if (&local_68 != puVar2) {
    local_48 = local_68;
    uStack_44 = uStack_64;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_48);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_28 = 0x16;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a581e0);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Object_oCredits_Alarm_0,param_1);
  if (&local_68 != puVar2) {
    local_48 = local_68;
    uStack_44 = uStack_64;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_48);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

