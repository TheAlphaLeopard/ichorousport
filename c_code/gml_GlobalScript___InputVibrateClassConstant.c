// gml_GlobalScript___InputVibrateClassConstant @ 0x1400e40c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_GlobalScript___InputVibrateClassConstant(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  char *local_180;
  undefined4 local_178;
  uint local_170;
  undefined8 local_168;
  undefined4 local_160;
  uint local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  uint local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined1 local_b0 [32];
  undefined8 local_90;
  undefined4 local_84;
  
  local_180 = "gml_Script___Update@anon@619@__InputVibrateClassADSR@__InputVibrateClassADSR";
  local_188 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_188;
  local_178 = 0x17;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_b0,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_170 = 0xffffff;
  local_11c = 0xffffff;
  local_128 = (undefined8 *)0x0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_178 = 0x19;
  FUN_140e85f80(param_1,DAT_141a02be8,0x80000000,&local_128);
  uStack_1bc = local_11c;
  uStack_1c0 = local_120;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
    local_1c8 = local_128;
  }
  else {
    FUN_1400419b0(&local_1c8,&local_128);
  }
  uStack_13c = 0;
  local_148 = (undefined8 *)0x408f400000000000;
  FUN_140046500(&local_1c8,&local_148);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = local_1c8;
  uStack_140 = uStack_1c0;
  uStack_13c = uStack_1bc;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_148);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_178 = 0x1b;
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a04158);
  local_e8 = uVar2;
  FUN_140e609c0(param_1);
  FUN_1400460e0(uVar2,&local_138);
  FUN_140e60910(1);
  local_178 = 0x1d;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_18c = 0;
  local_198 = 0;
  local_178 = 0x1e;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_19c = 0;
  local_1a8 = 0;
  local_178 = 0x1f;
  FUN_140e85f80(param_1,DAT_1419fd4e8,0x80000000,&local_f8);
  local_1c8 = (undefined8 *)local_f8;
  uStack_1c0 = uStack_f0;
  uStack_1bc = uStack_ec;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140041b80(&local_1b8,&local_1c8);
  local_178 = 0x20;
  local_148 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a040b8);
  local_104 = *(undefined4 *)((longlong)local_148 + 0xc);
  local_108 = *(undefined4 *)(local_148 + 1);
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) == 0) {
    local_110 = *local_148;
  }
  else {
    FUN_1400419b0(&local_110,local_148);
  }
  uVar8 = 0x3ff00000;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc920) &&
     (_Init_thread_header(&DAT_141ddc920), DAT_141ddc920 == -1)) {
    _DAT_141ddc93c = 0;
    _DAT_141ddc930 = 0;
    _DAT_141ddc950 = 0;
    _DAT_141ddc944 = 0x3ff0000000000000;
    _DAT_141ddc954 = 1;
    _DAT_141ddc964 = 0;
    _DAT_141ddc958 = 0x4000000000000000;
    _DAT_141ddc968 = 2;
    _DAT_141ddc978 = 0;
    _DAT_141ddc96c = 0x4008000000000000;
    _DAT_141ddc97c = 3;
    atexit((_func_5014 *)&LAB_141467020);
    _Init_thread_footer(&DAT_141ddc920);
  }
  uVar5 = 0;
  do {
    iVar1 = FUN_140e851f0(&DAT_141ddc930 + (longlong)(int)uVar5 * 0x14,&local_110,DAT_141955260,0);
    uVar10 = (undefined4)((ulonglong)pcVar9 >> 0x20);
    if (iVar1 == 0) {
      iVar1 = *(int *)(&DAT_141ddc940 + (longlong)(int)uVar5 * 0x14);
      if (iVar1 == 0) {
        local_178 = 0x23;
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        local_18c = 0;
        local_198 = 0;
        local_178 = 0x24;
        if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        local_1a8 = 0x3ff0000000000000;
        local_178 = 0x25;
        uVar7 = DAT_141a04188;
LAB_1400e4711:
        local_19c = 0;
      }
      else if (iVar1 == 1) {
        local_178 = 0x29;
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        local_18c = 0;
        local_198 = 0x3ff0000000000000;
        local_178 = 0x2a;
        puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a040e8);
        if (puVar3 != &local_1a8) {
          local_1c8 = (undefined8 *)*puVar3;
          uStack_1c0 = *(undefined4 *)(puVar3 + 1);
          uStack_1bc = *(undefined4 *)((longlong)puVar3 + 0xc);
          if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          FUN_140041b80(&local_1a8,&local_1c8);
        }
        local_178 = 0x2b;
        uVar7 = DAT_141a041b8;
      }
      else {
        if (iVar1 != 2) {
          if (iVar1 == 3) {
            local_178 = 0x35;
            puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a040e8);
            if (puVar3 != &local_198) {
              local_1c8 = (undefined8 *)*puVar3;
              uStack_1c0 = *(undefined4 *)(puVar3 + 1);
              uStack_1bc = *(undefined4 *)((longlong)puVar3 + 0xc);
              if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_198);
              }
              FUN_140041b80(&local_198,&local_1c8);
            }
            local_178 = 0x36;
            if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1a8);
            }
            local_1a8 = 0;
            local_178 = 0x37;
            uVar7 = DAT_141a04108;
            goto LAB_1400e4711;
          }
          break;
        }
        local_178 = 0x2f;
        puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a040e8);
        if (puVar3 != &local_198) {
          local_1c8 = (undefined8 *)*puVar3;
          uStack_1c0 = *(undefined4 *)(puVar3 + 1);
          uStack_1bc = *(undefined4 *)((longlong)puVar3 + 0xc);
          if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_198);
          }
          FUN_140041b80(&local_198,&local_1c8);
        }
        local_178 = 0x30;
        if (puVar3 != &local_1a8) {
          local_1c8 = (undefined8 *)*puVar3;
          uStack_1c0 = *(undefined4 *)(puVar3 + 1);
          uStack_1bc = *(undefined4 *)((longlong)puVar3 + 0xc);
          if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          FUN_140041b80(&local_1a8,&local_1c8);
        }
        local_178 = 0x31;
        uVar7 = DAT_141a040a8;
      }
      puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,uVar7);
      if (puVar3 != &local_1b8) {
        local_1c8 = (undefined8 *)*puVar3;
        uStack_1c0 = *(undefined4 *)(puVar3 + 1);
        uStack_1bc = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_1c8);
      }
      break;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  local_178 = 0x3b;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04158);
  local_c8 = &local_198;
  local_c0 = &local_1a8;
  uStack_1bc = *(uint *)((longlong)puVar3 + 0xc);
  uStack_1c0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) == 0) {
    local_1c8 = (undefined8 *)*puVar3;
  }
  else {
    FUN_1400419b0(&local_1c8,puVar3);
  }
  FUN_140046500(&local_1c8,&local_1b8);
  if ((uStack_1bc & 0xffffff) == 0) {
    uVar7 = SUB84(local_1c8,0);
  }
  else {
    uVar7 = FUN_140e4b060(&local_1c8);
  }
  local_90 = FUN_140e78ec0(uVar7,0,0x3ff0000000000000);
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  local_84 = 0;
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_b8 = &local_90;
  puVar4 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_158,3,CONCAT44(uVar10,DAT_141a00c58),&local_c8);
  uVar5 = 0xffffff;
  if (puVar4 != &local_168) {
    local_1c8 = (undefined8 *)*puVar4;
    uStack_1c0 = *(undefined4 *)(puVar4 + 1);
    uStack_1bc = *(uint *)((longlong)puVar4 + 0xc);
    FUN_140041b80(&local_168,&local_1c8);
    local_170 = local_15c;
    uVar5 = local_15c;
  }
  local_178 = 0x3c;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04178);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a041a8);
  FUN_140e609c0(param_1);
  uStack_1c0 = local_160;
  local_118 = uVar5 & 0x1f;
  uVar6 = 1 << (sbyte)local_118 & 0x46;
  uStack_1bc = uVar5;
  if (uVar6 == 0) {
    local_1c8 = (undefined8 *)local_168;
  }
  else {
    FUN_1400419b0(&local_1c8,&local_168);
  }
  FUN_140042560(&local_1c8,uVar2);
  if (&local_1c8 != puVar4) {
    local_d8 = (undefined4)local_1c8;
    uStack_d4 = local_1c8._4_4_;
    uStack_d0 = uStack_1c0;
    uStack_cc = uStack_1bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_d8);
  }
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140e60910(1);
  local_178 = 0x3d;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04138);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a041c8);
  FUN_140e609c0(param_1);
  uStack_1bc = local_170;
  uStack_1c0 = local_160;
  if (uVar6 == 0) {
    local_1c8 = (undefined8 *)local_168;
  }
  else {
    FUN_1400419b0(&local_1c8,&local_168);
  }
  FUN_140042560(&local_1c8,uVar2);
  if (&local_1c8 != puVar4) {
    local_d8 = (undefined4)local_1c8;
    uStack_d4 = local_1c8._4_4_;
    uStack_d0 = uStack_1c0;
    uStack_cc = uStack_1bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_d8);
  }
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140e60910(1);
  local_178 = 0x3f;
  FUN_140e609c0(param_1);
  FUN_1400460e0(local_e8,&local_138);
  FUN_140e60910(1);
  local_178 = 0x40;
  iVar1 = FUN_140e851f0(puVar3,&local_1b8,DAT_141955260,1);
  if (0 < iVar1) {
    local_178 = 0x42;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a04158);
    uVar2 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a04158);
    FUN_140e609c0(param_1);
    FUN_1400462a0(uVar2,&local_1b8);
    FUN_140e60910(1);
    local_178 = 0x43;
    uVar2 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a040b8);
    FUN_140046040(uVar2);
  }
  local_178 = 0x46;
  uStack_1bc = 0;
  local_1c8 = (undefined8 *)0x4008000000000000;
  iVar1 = FUN_140e851f0(local_148,&local_1c8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (iVar1 == -2 || 0 < iVar1) {
    uVar8 = 0;
  }
  *param_3 = (ulonglong)uVar8 << 0x20;
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_118 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(local_b0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_188;
  return param_3;
}

