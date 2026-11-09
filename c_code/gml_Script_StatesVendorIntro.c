// gml_Script_StatesVendorIntro @ 0x1405b48f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesVendorIntro
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
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
  
  local_50 = "gml_Script_StatesTongueGone";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x252;
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
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de08c0) &&
     (_Init_thread_header(&DAT_141de08c0), DAT_141de08c0 == -1)) {
    _DAT_141de082c = 0;
    _DAT_141de0820 = 0x4000000000000000;
    _DAT_141de0840 = 0;
    _DAT_141de0834 = 0;
    _DAT_141de0844 = 1;
    _DAT_141de0854 = 0;
    _DAT_141de0848 = 0x3ff0000000000000;
    _DAT_141de0858 = 2;
    _DAT_141de0868 = 0;
    _DAT_141de085c = 0x4008000000000000;
    _DAT_141de086c = 3;
    atexit((_func_5014 *)&LAB_141483140);
    _Init_thread_footer(&DAT_141de08c0);
  }
  uVar3 = 0;
  do {
    iVar1 = FUN_140e851f0(&DAT_141de0820 + (longlong)(int)uVar3 * 0x14,&local_68,DAT_141955260,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(&DAT_141de0830 + (longlong)(int)uVar3 * 0x14);
      if (iVar1 == 0) {
        local_48 = 0x256;
        if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_78);
        }
        local_6c = 0;
        local_78 = 0;
        FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_78);
        local_48 = 599;
        if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
        local_7c = 0;
        local_88 = 0;
        FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_88);
        local_48 = 600;
        if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        local_8c = 0;
        local_98 = 0;
        FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_98);
        local_48 = 0x259;
      }
      else if (iVar1 == 1) {
        local_48 = 0x25e;
      }
      else if (iVar1 == 2) {
        local_48 = 0x262;
        if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        local_a8 = 0;
        local_a0 = 0;
        local_9c = 5;
        uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b18);
        FUN_140e63610(param_1,param_2,&local_a8,0,uVar2,0);
        local_48 = 0x263;
      }
      else if (iVar1 == 3) {
        local_48 = 0x267;
      }
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
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

