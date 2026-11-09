// gml_GlobalScript_StatesClot @ 0x1405179c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript_StatesClot
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_StatesBodyBagIdle";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 3;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_5c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_60 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) == 0) {
    local_68 = *param_5;
  }
  else {
    FUN_1400419b0(&local_68);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf42c) &&
     (_Init_thread_header(&DAT_141ddf42c), DAT_141ddf42c == -1)) {
    _DAT_141ddf48c = 0;
    _DAT_141ddf480 = 0x4000000000000000;
    _DAT_141ddf4a0 = 0;
    _DAT_141ddf494 = 0;
    _DAT_141ddf4a4 = 1;
    _DAT_141ddf4b4 = 0;
    _DAT_141ddf4a8 = 0x3ff0000000000000;
    _DAT_141ddf4b8 = 2;
    _DAT_141ddf4c8 = 0;
    _DAT_141ddf4bc = 0x4008000000000000;
    _DAT_141ddf4cc = 3;
    atexit((_func_5014 *)&LAB_141481520);
    _Init_thread_footer(&DAT_141ddf42c);
  }
  uVar3 = 0;
  do {
    iVar1 = FUN_140e851f0(&DAT_141ddf480 + (longlong)(int)uVar3 * 0x14,&local_68,DAT_141955260,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(&DAT_141ddf490 + (longlong)(int)uVar3 * 0x14);
      if (iVar1 == 0) {
        local_48 = 7;
        if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_78);
        }
        local_6c = 0;
        local_78 = 0;
        FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_78);
        local_48 = 8;
        if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
        local_7c = 0;
        local_88 = 0;
        FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_88);
        local_48 = 9;
      }
      else if (iVar1 == 1) {
        local_48 = 0xe;
      }
      else if (iVar1 == 2) {
        local_48 = 0x12;
        if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        local_98 = 0;
        local_90 = 0;
        local_8c = 5;
        uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b18);
        FUN_140e63610(param_1,param_2,&local_98,0,uVar2,0);
        local_48 = 0x14;
      }
      else if (iVar1 == 3) {
        local_48 = 0x18;
      }
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

