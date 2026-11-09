// gml_Script____struct___727_gml_Object_oRogueLevelManager_Create_0 @ 0x140cbd270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___727_gml_Object_oRogueLevelManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script____struct___726@gml_Object_oRogueLevelManager_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x82;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de3248) {
    _Init_thread_header(&DAT_141de3248);
    if (DAT_141de3248 == -1) {
      DAT_141de3328 = FUN_140e63aa0(DAT_1419f9f98);
      _Init_thread_footer(&DAT_141de3248);
    }
  }
  FUN_140e643a0(param_1,DAT_141de3328);
  local_38 = 0x82;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f99b8);
  FUN_140e609c0(param_1);
  uStack_5c = 0xf;
  local_68 = 0x1000001000002ee;
  if (&local_68 != puVar1) {
    local_58 = 0x2ee;
    uStack_54 = 0x1000001;
    uStack_50 = uStack_60;
    uStack_4c = 0xf;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  FUN_140e60910(1);
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9cb8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,
                gml_Script_anon_2666____struct___727_gml_Object_oRogueLevelManager_Create_0,param_1)
  ;
  if (&local_68 != puVar1) {
    local_58 = (undefined4)local_68;
    uStack_54 = local_68._4_4_;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  puVar2 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f93d8);
  if (puVar2 != &DAT_141ddad98) {
    local_58 = _DAT_141ddad98;
    uStack_54 = uRam0000000141ddad9c;
    uStack_50 = uRam0000000141ddada0;
    uStack_4c = DAT_141ddada4;
    if ((1 << ((byte)*(undefined4 *)(puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_58);
  }
  puVar2 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9ac8);
  if (puVar2 != &DAT_141ddad98) {
    local_58 = _DAT_141ddad98;
    uStack_54 = uRam0000000141ddad9c;
    uStack_50 = uRam0000000141ddada0;
    uStack_4c = DAT_141ddada4;
    if ((1 << ((byte)*(undefined4 *)(puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_58);
  }
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9b88);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ffc28);
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  if (param_5 != puVar1) {
    local_58 = *(undefined4 *)param_5;
    uStack_54 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_50 = *(undefined4 *)(param_5 + 1);
    uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  FUN_140e60910(1);
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9c58);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58080);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

