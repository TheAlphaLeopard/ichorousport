// gml_Script_angle_in_range @ 0x14021c300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_angle_in_range(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *local_res18;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_ambience_level_set";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x12;
  _eh_vector_constructor_iterator_(local_58,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0ae88);
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x14;
  uStack_6c = 0xf;
  local_78 = 0x1000002000000b9;
  local_68 = 0xb9;
  uStack_64 = 0x1000002;
  uStack_60 = uStack_70;
  uStack_5c = 0xf;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_68);
  local_38 = 0x16;
  local_7c = *(undefined4 *)((longlong)puVar2 + 0xc);
  local_80 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) == 0) {
    local_88 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_88,puVar2);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddbfc) &&
     (_Init_thread_header(&DAT_141dddbfc), DAT_141dddbfc == -1)) {
    _DAT_141dddbcc = DAT_141dcddc4;
    _DAT_141dddbc8 = DAT_141dcddc0;
    if ((1 << ((byte)DAT_141dcddc4 & 0x1f) & 0x46U) == 0) {
      _DAT_141dddbc0 = DAT_141dcddb8;
    }
    else {
      FUN_1400419b0(&DAT_141dddbc0,&DAT_141dcddb8);
    }
    _DAT_141dddbd0 = 0;
    _DAT_141dddbe0 = DAT_141dcddd4;
    _DAT_141dddbdc = DAT_141dcddd0;
    if ((1 << ((byte)DAT_141dcddd4 & 0x1f) & 0x46U) == 0) {
      _DAT_141dddbd4 = DAT_141dcddc8;
    }
    else {
      FUN_1400419b0(&DAT_141dddbd4,&DAT_141dcddc8);
    }
    _DAT_141dddbe4 = 0;
    _DAT_141dddbf4 = DAT_141dcddb4;
    _DAT_141dddbf0 = DAT_141dcddb0;
    if ((1 << ((byte)DAT_141dcddb4 & 0x1f) & 0x46U) == 0) {
      _DAT_141dddbe8 = DAT_141dcdda8;
    }
    else {
      FUN_1400419b0(&DAT_141dddbe8,&DAT_141dcdda8);
    }
    _DAT_141dddbf8 = 1;
    atexit((_func_5014 *)&LAB_14146f5b0);
    _Init_thread_footer(&DAT_141dddbfc);
  }
  uVar3 = 0;
  do {
    iVar1 = FUN_140e851f0(&DAT_141dddbc0 + (longlong)(int)uVar3 * 0x14,&local_88,DAT_141955260,0);
    if (iVar1 == 0) {
      if (*(int *)(&DAT_141dddbd0 + (longlong)(int)uVar3 * 0x14) == 0) {
        local_38 = 0x1b;
        uStack_6c = 0xf;
        local_78 = 0x100000200000000;
        local_68 = 0;
        uStack_64 = 0x1000002;
        uStack_60 = uStack_70;
        uStack_5c = 0xf;
        if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        FUN_140041b80(&local_a8,&local_68);
      }
      else if (*(int *)(&DAT_141dddbd0 + (longlong)(int)uVar3 * 0x14) == 1) {
        local_38 = 0x20;
        uStack_6c = 0xf;
        local_78 = 0x100000200000001;
        local_68 = 1;
        uStack_64 = 0x1000002;
        uStack_60 = uStack_70;
        uStack_5c = 0xf;
        if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        FUN_140041b80(&local_a8,&local_68);
      }
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  local_38 = 0x24;
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  local_res18 = &local_a8;
  gml_GlobalScript_angle_in_range(param_1,param_2,&local_98,1,&local_res18);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_58,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

