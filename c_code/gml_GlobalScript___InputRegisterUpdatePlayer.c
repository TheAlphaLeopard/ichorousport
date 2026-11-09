// gml_GlobalScript___InputRegisterUpdatePlayer @ 0x1400cbc70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript___InputRegisterUpdatePlayer
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong *plVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  double **ppdVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  undefined8 local_228;
  undefined4 uStack_220;
  uint uStack_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  double local_208;
  undefined4 uStack_200;
  uint uStack_1fc;
  undefined8 local_1f8;
  char *local_1f0;
  undefined4 local_1e8;
  double local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  double local_1c8;
  undefined4 local_1bc;
  double local_1b8;
  undefined4 local_1ac;
  double local_1a8;
  undefined4 local_19c;
  double local_198;
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  double *local_148;
  double *local_140;
  double *local_138;
  double *local_130;
  undefined1 *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  double local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  double local_f0;
  undefined4 local_e8;
  uint local_e4;
  double local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  double local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  
  local_1f0 = "gml_Script_anon@139@__InputRegisterUpdate@__InputRegisterUpdate";
  local_1f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1f8;
  local_1e8 = 5;
  uVar15 = 1;
  _eh_vector_constructor_iterator_(&local_1c8,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_e4 = 0xffffff;
  local_f0 = 0.0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_104 = 0xffffff;
  local_110 = 0.0;
  uStack_bc = 0xffffff;
  local_c8 = 0.0;
  uStack_cc = 0xffffff;
  local_d8 = 0.0;
  uStack_1fc = 0xffffff;
  local_208 = 0.0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_20c = 0;
  local_218 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc7f8) &&
     (_Init_thread_header(&DAT_141ddc7f8), DAT_141ddc7f8 == -1)) {
    DAT_141ddc800 = (longlong *)FUN_140e63aa0(DAT_141a02c18);
    _Init_thread_footer(&DAT_141ddc7f8);
  }
  if (DAT_141ddc056 == '\0') {
    FUN_140e64380(DAT_141ddc800,"gml_Script_anon@139@__InputRegisterUpdate@__InputRegisterUpdate");
    FUN_140e64380(param_1,"gml_Script_anon@139@__InputRegisterUpdate@__InputRegisterUpdate");
  }
  local_1e8 = 7;
  if (DAT_141ddc056 == '\0') {
    DAT_141ddc056 = '\x01';
    puVar4 = (undefined8 *)(**(code **)(*DAT_141ddc800 + 0x10))(DAT_141ddc800,DAT_141a026b8);
    FUN_140e609c0(DAT_141ddc800);
    uVar15 = 0;
    puVar5 = (undefined8 *)gml_Script___InputTrace(param_1,param_2,&local_218,0,0);
    if (puVar5 != puVar4) {
      local_228 = (double)*puVar5;
      uStack_220 = *(undefined4 *)(puVar5 + 1);
      uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_228);
    }
    FUN_140e60910(1);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe0b8);
    puVar5 = (undefined8 *)(**(code **)(*DAT_141ddc800 + 0x10))(DAT_141ddc800,DAT_141a02998);
    FUN_140e609c0(DAT_141ddc800);
    if (puVar4 != puVar5) {
      local_228 = (double)*puVar4;
      uStack_220 = *(undefined4 *)(puVar4 + 1);
      uStack_21c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_228);
    }
    FUN_140e60910(1);
  }
  local_1e8 = 10;
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a02708);
  FUN_140e85f80(param_1,DAT_141a02be8,0x80000000,&local_f0);
  uStack_1cc = local_e4;
  uStack_1d0 = local_e8;
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) == 0) {
    local_1d8 = local_f0;
  }
  else {
    FUN_1400419b0(&local_1d8,&local_f0);
  }
  uStack_21c = 0;
  local_228 = 1000.0;
  FUN_140046500(&local_1d8,&local_228);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  FUN_1400460e0(uVar6,&local_1d8);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1e8 = 0xb;
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe1c8);
  FUN_140046040(uVar6);
  local_1e8 = 0xd;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02bc8);
  uStack_21c = 0xd;
  local_228 = 0.0;
  if (&local_228 != puVar4) {
    local_1d8 = 0.0;
    uStack_1d0 = uStack_220;
    uStack_1cc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_1d8);
  }
  local_1e8 = 0x12;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  uVar12 = CONCAT44(uVar15,DAT_141a02bf8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_158,0,uVar12,0);
  uVar15 = (undefined4)((ulonglong)uVar12 >> 0x20);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 == '\0') {
    local_1e8 = 0x2b;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02088);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 == '\0') {
      local_1e8 = 0x34;
      FUN_140e85f80(param_1,DAT_141a01578,0x80000000,&local_68);
      uStack_21c = 0;
      local_228 = 0.0;
      iVar14 = FUN_140e851f0(&local_68,&local_228,DAT_141955260,0);
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      if (iVar14 == 0) {
        FUN_140e85f80(param_1,DAT_141a015f8,0x80000000,&local_78);
        uStack_21c = 0;
        local_228 = 0.0;
        iVar14 = FUN_140e851f0(&local_78,&local_228,DAT_141955260,0);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        if (iVar14 == 0) {
          if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_218);
          }
          local_218 = 0;
          local_210 = 0;
          local_20c = 5;
          uVar12 = CONCAT44(uVar15,DAT_141a02bd8);
          uVar6 = FUN_140e634e0(param_1,param_2,&local_218,0,uVar12,0);
          uVar15 = (undefined4)((ulonglong)uVar12 >> 0x20);
          cVar2 = FUN_140e491e0(uVar6);
          if (cVar2 == '\0') goto LAB_1400cc90a;
        }
      }
      local_1e8 = 0x3a;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02088);
      uStack_21c = 0xd;
      local_228 = 1.0;
      if (&local_228 != puVar4) {
        local_1d8 = 1.0;
        uStack_1d0 = uStack_220;
        uStack_1cc = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_1d8);
      }
      local_1e8 = 0x3b;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01618);
      uStack_21c = 0xd;
      local_228 = 1.0;
      if (&local_228 != puVar4) {
        local_1d8 = 1.0;
        uStack_1d0 = uStack_220;
        uStack_1cc = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_1d8);
      }
      local_1e8 = 0x3c;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02bc8);
      uStack_21c = 0xd;
      local_228 = 1.0;
      if (&local_228 != puVar4) {
        local_1d8 = 1.0;
        uStack_1d0 = uStack_220;
        uStack_1cc = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_1d8);
      }
      local_1e8 = 0x41;
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_218 = 0;
      local_210 = 0;
      local_20c = 5;
      FUN_140e634e0(param_1,param_2,&local_218,0,CONCAT44(uVar15,DAT_141a02728),0);
      local_1e8 = 0x44;
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      uVar15 = _DAT_1419e1a80;
      uVar16 = uRam00000001419e1a84;
      uStack_220 = uRam00000001419e1a88;
      uStack_21c = uRam00000001419e1a8c;
      goto LAB_1400cc752;
    }
    local_1e8 = 0x2d;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a01618);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 != '\0') {
      local_1e8 = 0x30;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01618);
      uStack_21c = 0xd;
      local_228 = 0.0;
      if (&local_228 != puVar4) {
        local_1d8 = 0.0;
        uStack_1d0 = uStack_220;
        uStack_1cc = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_1d8);
      }
      local_1e8 = 0x31;
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_218 = 0;
      local_210 = 0;
      local_20c = 5;
      FUN_140e609c0(param_1);
      uVar15 = 0;
      uVar6 = gml_Script___InputGetPS5InitialUserDevice(param_1,param_2,&local_218,0,0);
      iVar14 = FUN_140e851f0(uVar6,&DAT_1419df7b0,DAT_141955260,0);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0xd;
      if (iVar14 == 0) {
        *puVar4 = 0;
        FUN_140e60910(1);
      }
      else {
        *puVar4 = 0x3ff0000000000000;
        FUN_140e60910(1);
      }
    }
  }
  else {
    local_1e8 = 0x15;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))();
    uStack_21c = 0xd;
    local_228 = 0.0;
    if (&local_228 != puVar4) {
      local_1d8 = 0.0;
      uStack_1d0 = uStack_220;
      uStack_1cc = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_1d8);
    }
    local_1e8 = 0x16;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01618);
    uStack_21c = 0xd;
    local_228 = 1.0;
    if (&local_228 != puVar4) {
      local_1d8 = 1.0;
      uStack_1d0 = uStack_220;
      uStack_1cc = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_1d8);
    }
    local_1e8 = 0x24;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    local_228 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_220 = DAT_1419df7b8;
    uStack_21c = DAT_1419df7bc;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_228);
    local_148 = &local_1c8;
    local_228 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_220 = DAT_1419df7b8;
    uStack_21c = DAT_1419df7bc;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_228);
    local_140 = &local_1b8;
    local_228 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_220 = DAT_1419df7b8;
    uStack_21c = DAT_1419df7bc;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_228);
    local_138 = &local_1a8;
    local_228 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_220 = DAT_1419df7b8;
    uStack_21c = DAT_1419df7bc;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_228);
    local_130 = &local_198;
    FUN_140e634e0(param_1,param_2,&local_218,4,CONCAT44(uVar15,DAT_141a026c8),&local_148);
    local_1e8 = 0x27;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    uVar15 = _DAT_1419e1a70;
    uVar16 = uRam00000001419e1a74;
    uStack_220 = uRam00000001419e1a78;
    uStack_21c = uRam00000001419e1a7c;
LAB_1400cc752:
    local_228 = (double)CONCAT44(uVar16,uVar15);
    local_20c = 5;
    local_210 = 0;
    local_218 = 0;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_228);
    local_148 = &local_1c8;
    local_228 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_220 = DAT_1419df7b8;
    uStack_21c = DAT_1419df7bc;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_228);
    local_140 = &local_1b8;
    local_228 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_220 = DAT_1419df7b8;
    uStack_21c = DAT_1419df7bc;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_228);
    local_138 = &local_1a8;
    local_228 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_220 = DAT_1419df7b8;
    uStack_21c = DAT_1419df7bc;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_228);
    local_130 = &local_198;
    local_228 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_220 = DAT_1419df7b8;
    uStack_21c = DAT_1419df7bc;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_228);
    local_128 = local_188;
    local_228 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_220 = DAT_1419df7b8;
    uStack_21c = DAT_1419df7bc;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_228);
    local_120 = local_178;
    local_228 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_220 = DAT_1419df7b8;
    uStack_21c = DAT_1419df7bc;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_228);
    local_118 = local_168;
    ppdVar18 = &local_148;
    gml_GlobalScript___InputPlugInRegisterCallbackInternal(param_1,param_2,&local_218,7,ppdVar18);
    uVar15 = (undefined4)((ulonglong)ppdVar18 >> 0x20);
  }
LAB_1400cc90a:
  local_1e8 = 0x4c;
  pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a02b48);
  pdVar8 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02c38);
  FUN_140e609c0(param_1);
  if (pdVar7 != pdVar8) {
    local_228 = *pdVar7;
    uStack_220 = *(undefined4 *)(pdVar7 + 1);
    uStack_21c = *(uint *)((longlong)pdVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar8);
    }
    FUN_140041b80(pdVar8,&local_228);
  }
  FUN_140e60910(1);
  local_1e8 = 0x4d;
  pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a02c58);
  pdVar8 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02b58);
  FUN_140e609c0(param_1);
  if (pdVar9 != pdVar8) {
    local_228 = *pdVar9;
    uStack_220 = *(undefined4 *)(pdVar9 + 1);
    uStack_21c = *(uint *)((longlong)pdVar9 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar8);
    }
    FUN_140041b80(pdVar8,&local_228);
  }
  FUN_140e60910(1);
  local_1e8 = 0x4f;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02b68);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 == '\0') {
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a01618);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 != '\0') goto LAB_1400cd224;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    local_228 = (double)CONCAT44(uRam00000001419e1a94,_DAT_1419e1a90);
    uStack_220 = uRam00000001419e1a98;
    uStack_21c = uRam00000001419e1a9c;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_228);
    local_148 = &local_1c8;
    ppdVar18 = &local_148;
    uVar6 = gml_Script_InputDeviceGetRebindingResult(param_1,param_2,&local_158,1,ppdVar18);
    uVar15 = (undefined4)((ulonglong)ppdVar18 >> 0x20);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 != '\0') goto LAB_1400cd224;
    local_1e8 = 0x55;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02c28);
    uStack_21c = 0xd;
    local_228 = 0.0;
    if (&local_228 != puVar4) {
      local_1d8 = 0.0;
      uStack_1d0 = uStack_220;
      uStack_1cc = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_1d8);
    }
    local_1e8 = 0x57;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02b48);
    FUN_140e609c0(param_1);
    puVar5 = (undefined8 *)gml_Script_MouseCenterInWindow(param_1,param_2,&local_218,0,0);
    if (puVar5 != puVar4) {
      local_228 = (double)*puVar5;
      uStack_220 = *(undefined4 *)(puVar5 + 1);
      uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_228);
    }
    FUN_140e60910(1);
    local_1e8 = 0x58;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02c58);
    FUN_140e609c0(param_1);
    puVar5 = (undefined8 *)gml_Script_MouseGuiX(param_1,param_2,&local_218,0,0);
    if (puVar5 != puVar4) {
      local_228 = (double)*puVar5;
      uStack_220 = *(undefined4 *)(puVar5 + 1);
      uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_228);
    }
    FUN_140e60910(1);
    local_1e8 = 0x5f;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a02b48);
    pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a02c58);
    if (pdVar8 != &local_1c8) {
      local_228 = *pdVar8;
      uStack_220 = *(undefined4 *)(pdVar8 + 1);
      uStack_21c = *(undefined4 *)((longlong)pdVar8 + 0xc);
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_228);
    }
    local_148 = &local_1c8;
    if (pdVar7 != &local_1b8) {
      local_228 = *pdVar7;
      uStack_220 = *(undefined4 *)(pdVar7 + 1);
      uStack_21c = *(undefined4 *)((longlong)pdVar7 + 0xc);
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_228);
    }
    local_140 = &local_1b8;
    local_228 = (double)CONCAT44(uRam00000001419e1a44,_DAT_1419e1a40);
    uStack_220 = uRam00000001419e1a48;
    uStack_21c = uRam00000001419e1a4c;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_228);
    local_138 = &local_1a8;
    local_228 = (double)CONCAT44(uRam0000000141dc60f4,_DAT_141dc60f0);
    uStack_220 = uRam0000000141dc60f8;
    uStack_21c = uRam0000000141dc60fc;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_228);
    local_130 = &local_198;
    local_228 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_220 = DAT_1419df7b8;
    uStack_21c = DAT_1419df7bc;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_228);
    local_128 = local_188;
    puVar4 = (undefined8 *)FUN_140087c90(param_1,param_2,&local_218,5,&local_148);
    if (puVar4 != &local_100) {
      local_228 = (double)*puVar4;
      uStack_220 = *(undefined4 *)(puVar4 + 1);
      uStack_21c = *(uint *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_100);
      }
      FUN_140041b80(&local_100,&local_228);
    }
    local_1e8 = 0x60;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02b38);
    FUN_140e87170(&local_100,DAT_1419fe0e8,0x80000000,&local_a8,param_1,param_2);
    FUN_140e609c0(param_1);
    if (&local_a8 != puVar4) {
      local_228 = (double)local_a8;
      uStack_220 = uStack_a0;
      uStack_21c = uStack_9c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_228);
    }
    FUN_140e60910(1);
    local_1e8 = 0x61;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02c08);
    FUN_140e87170(&local_100,DAT_1419fe158,0x80000000,&local_b8,param_1,param_2);
    FUN_140e609c0(param_1);
    if (&local_b8 != puVar4) {
      local_228 = (double)local_b8;
      uStack_220 = uStack_b0;
      uStack_21c = uStack_ac;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_228);
    }
    FUN_140e60910(1);
    local_1e8 = 99;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a02b48);
    pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a02c58);
    if (pdVar7 != &local_1c8) {
      local_228 = *pdVar7;
      uStack_220 = *(undefined4 *)(pdVar7 + 1);
      uStack_21c = *(undefined4 *)((longlong)pdVar7 + 0xc);
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_228);
    }
    local_148 = &local_1c8;
    if (pdVar9 != &local_1b8) {
      local_228 = *pdVar9;
      uStack_220 = *(undefined4 *)(pdVar9 + 1);
      uStack_21c = *(undefined4 *)((longlong)pdVar9 + 0xc);
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_228);
    }
    local_140 = &local_1b8;
    local_228 = (double)CONCAT44(uRam00000001419e1a44,_DAT_1419e1a40);
    uStack_220 = uRam00000001419e1a48;
    uStack_21c = uRam00000001419e1a4c;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_228);
    local_138 = &local_1a8;
    local_228 = (double)CONCAT44(uRam00000001419e1a64,_DAT_1419e1a60);
    uStack_220 = uRam00000001419e1a68;
    uStack_21c = uRam00000001419e1a6c;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_228);
    local_130 = &local_198;
    local_228 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_220 = DAT_1419df7b8;
    uStack_21c = DAT_1419df7bc;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_228);
    local_128 = local_188;
    pdVar8 = (double *)FUN_140087c90(param_1,param_2,&local_218,5,&local_148);
    if (pdVar8 != &local_110) {
      local_228 = *pdVar8;
      uStack_220 = *(undefined4 *)(pdVar8 + 1);
      uStack_21c = *(uint *)((longlong)pdVar8 + 0xc);
      if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_110);
      }
      FUN_140041b80(&local_110,&local_228);
    }
    local_1e8 = 100;
    pdVar8 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02c68);
    FUN_140e87170(&local_110,DAT_1419fe0e8,0x80000000,&local_c8,param_1,param_2);
    FUN_140e609c0(param_1);
    if (&local_c8 != pdVar8) {
      local_228 = local_c8;
      uStack_220 = uStack_c0;
      uStack_21c = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar8);
      }
      FUN_140041b80(pdVar8,&local_228);
    }
    FUN_140e60910(1);
    local_1e8 = 0x65;
    pdVar8 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02b88);
    plVar11 = param_1;
    FUN_140e87170(&local_110,DAT_1419fe158,0x80000000,&local_d8,param_1,param_2);
    uVar15 = (undefined4)((ulonglong)plVar11 >> 0x20);
    FUN_140e609c0(param_1);
    if (&local_d8 != pdVar8) {
      local_228 = local_d8;
      uStack_220 = uStack_d0;
      uStack_21c = uStack_cc;
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar8);
      }
      FUN_140041b80(pdVar8,&local_228);
    }
    FUN_140e60910(1);
  }
  else {
LAB_1400cd224:
    local_1e8 = 0x51;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02c28);
    uStack_21c = 0xd;
    local_228 = 1.0;
    if (&local_228 != puVar4) {
      local_1d8 = 1.0;
      uStack_1d0 = uStack_220;
      uStack_1cc = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_1d8);
    }
  }
  local_1e8 = 0x68;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a02c38);
  pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a02b58);
  plVar11 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02b98);
  if (pdVar8 != &local_1c8) {
    local_228 = *pdVar8;
    uStack_220 = *(undefined4 *)(pdVar8 + 1);
    uStack_21c = *(uint *)((longlong)pdVar8 + 0xc);
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_228);
  }
  local_148 = &local_1c8;
  if (pdVar10 != &local_1b8) {
    local_228 = *pdVar10;
    uStack_220 = *(undefined4 *)(pdVar10 + 1);
    uStack_21c = *(uint *)((longlong)pdVar10 + 0xc);
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_228);
  }
  local_140 = &local_1b8;
  if (pdVar7 != &local_1a8) {
    local_228 = *pdVar7;
    uStack_220 = *(undefined4 *)(pdVar7 + 1);
    uStack_21c = *(uint *)((longlong)pdVar7 + 0xc);
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_228);
  }
  local_138 = &local_1a8;
  if (pdVar9 != &local_198) {
    local_228 = *pdVar9;
    uStack_220 = *(undefined4 *)(pdVar9 + 1);
    uStack_21c = *(uint *)((longlong)pdVar9 + 0xc);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_228);
  }
  local_130 = &local_198;
  FUN_140e609c0(param_1);
  uVar12 = CONCAT44(uVar15,DAT_1419fd548);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_218,4,uVar12,&local_148);
  uVar15 = (undefined4)((ulonglong)uVar12 >> 0x20);
  iVar14 = 0;
  uStack_21c = 0;
  local_228 = 2.0;
  iVar3 = FUN_140e851f0(uVar6,&local_228,DAT_141955260,1);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)plVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(plVar11);
  }
  *(undefined4 *)((longlong)plVar11 + 0xc) = 0xd;
  if (iVar3 < 1) {
    uVar17 = 0;
  }
  else {
    uVar17 = 0x3ff00000;
  }
  *plVar11 = (ulonglong)uVar17 << 0x20;
  FUN_140e60910(1);
  local_1e8 = 0x6d;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a02b78);
  local_228 = (double)CONCAT44(uRam0000000141dc60f4,_DAT_141dc60f0);
  uStack_220 = uRam0000000141dc60f8;
  uStack_21c = uRam0000000141dc60fc;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_228);
  local_148 = &local_1c8;
  local_228 = (double)CONCAT44(uRam00000001419e1a64,_DAT_1419e1a60);
  uStack_220 = uRam00000001419e1a68;
  uStack_21c = uRam00000001419e1a6c;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140041b80(&local_1b8,&local_228);
  local_140 = &local_1b8;
  FUN_140e609c0(param_1);
  uVar19 = CONCAT44(uVar15,DAT_141a029d8);
  uVar12 = FUN_140e634e0(param_1,param_2,&local_218,2,uVar19,&local_148);
  uVar15 = (undefined4)((ulonglong)uVar19 >> 0x20);
  FUN_1400460e0(uVar6,uVar12);
  FUN_140e60910(1);
  local_1e8 = 0x6e;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a02b28);
  local_228 = (double)CONCAT44(uRam0000000141dc60f4,_DAT_141dc60f0);
  uStack_220 = uRam0000000141dc60f8;
  uStack_21c = uRam0000000141dc60fc;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_228);
  local_148 = &local_1c8;
  local_228 = (double)CONCAT44(uRam00000001419e1a64,_DAT_1419e1a60);
  uStack_220 = uRam00000001419e1a68;
  uStack_21c = uRam00000001419e1a6c;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140041b80(&local_1b8,&local_228);
  local_140 = &local_1b8;
  FUN_140e609c0(param_1);
  ppdVar18 = &local_148;
  uVar20 = CONCAT44(uVar15,DAT_141a02c48);
  uVar12 = FUN_140e634e0(param_1,param_2,&local_218,2,uVar20,ppdVar18);
  FUN_1400460e0(uVar6,uVar12);
  FUN_140e60910(1);
  local_1e8 = 0x70;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02b28);
  uVar12 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02b78);
  uVar17 = FUN_140e851f0(uVar6,uVar12,DAT_141955260,1);
  if (uVar17 < 0x80000000) {
    local_1e8 = 0x73;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a02b48);
    (**(code **)(*param_1 + 8))(param_1,DAT_141a02c58);
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02b28);
    uVar12 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02b78);
    plVar11 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01648);
    FUN_140e609c0(param_1);
    iVar3 = FUN_140e851f0(uVar6,uVar12,DAT_141955260,1);
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar11);
    }
    *(undefined4 *)((longlong)plVar11 + 0xc) = 0xd;
    if (iVar3 < 1) {
      uVar17 = 0;
    }
    else {
      uVar17 = 0x3ff00000;
    }
    *plVar11 = (ulonglong)uVar17 << 0x20;
    FUN_140e60910(1);
    local_1e8 = 0x74;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02b78);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0;
    local_1e8 = 0x75;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02b28);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0;
  }
  else {
    local_1e8 = 0x79;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01648);
    uStack_21c = 0xd;
    local_228 = 0.0;
    if (&local_228 != puVar4) {
      local_1d8 = 0.0;
      uStack_1d0 = uStack_220;
      uStack_1cc = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_1d8);
    }
  }
  local_1e8 = 0x7f;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe0a8);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 != '\0') {
    local_1e8 = 0x81;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe0a8);
    uStack_21c = 0xd;
    local_228 = 0.0;
    if (&local_228 != puVar4) {
      local_1d8 = 0.0;
      uStack_1d0 = uStack_220;
      uStack_1cc = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_1d8);
    }
    local_1e8 = 0x84;
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    uStack_1fc = 0;
    local_208 = 0.0;
    local_1e8 = 0x85;
    pdVar8 = (double *)(**(code **)(*DAT_141ddc800 + 8))(DAT_141ddc800,DAT_141a02998);
    if ((*(int *)((longlong)pdVar8 + 0xc) == 2) && (*pdVar8 != 0.0)) {
      iVar14 = *(int *)((longlong)*pdVar8 + 0x24);
    }
    while (0 < iVar14) {
      iVar14 = iVar14 + -1;
      local_1e8 = 0x87;
      plVar11 = (longlong *)(**(code **)(*DAT_141ddc800 + 8))(DAT_141ddc800,DAT_141a02998);
      iVar3 = FUN_140e4a740(&local_208);
      if (((*(uint *)((longlong)plVar11 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar11, lVar1 != 0))
      {
        if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      ppdVar18 = (double **)((ulonglong)ppdVar18 & 0xffffffffffffff00);
      uVar20 = uVar20 & 0xffffffffffffff00;
      FUN_140e87440(plVar11,DAT_1419fe108,0x80000000,&local_88,uVar20,ppdVar18);
      cVar2 = FUN_140e491e0(&local_88);
      if (cVar2 == '\0') {
        local_1e8 = 0x8d;
        uVar17 = uStack_1fc & 0xffffff;
        if (uVar17 != 0) {
          if (uVar17 != 1) {
            if (uVar17 == 7) {
              local_208 = (double)CONCAT44(local_208._4_4_,local_208._0_4_ + 1);
            }
            else if (uVar17 == 10) {
              local_208 = (double)((longlong)local_208 + 1);
            }
            else {
              if (uVar17 == 0xd) {
                uStack_1fc = 0;
                goto LAB_1400cdb76;
              }
              FUN_140042910(&DAT_14172c3d8,&local_208,&local_208);
            }
            goto LAB_1400cdb80;
          }
          local_208 = (double)FUN_140e4b060(&local_208);
          uStack_1fc = 0;
        }
LAB_1400cdb76:
        local_208 = local_208 + 1.0;
      }
      else {
        local_1e8 = 0x89;
        if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        uVar15 = (undefined4)(uVar20 >> 0x20);
        local_218 = 0;
        local_210 = 0;
        local_20c = 5;
        pdVar8 = (double *)(**(code **)(*DAT_141ddc800 + 8))(DAT_141ddc800,DAT_141a02998);
        if (pdVar8 != &local_1c8) {
          local_228 = *pdVar8;
          uStack_220 = *(undefined4 *)(pdVar8 + 1);
          uStack_21c = *(undefined4 *)((longlong)pdVar8 + 0xc);
          if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          FUN_140041b80(&local_1c8,&local_228);
        }
        local_148 = &local_1c8;
        local_140 = &local_208;
        local_228 = (double)CONCAT44(uRam00000001419e1a64,_DAT_1419e1a60);
        uStack_220 = uRam00000001419e1a68;
        uStack_21c = uRam00000001419e1a6c;
        if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        FUN_140041b80(&local_1a8,&local_228);
        local_138 = &local_1a8;
        ppdVar18 = &local_148;
        uVar20 = CONCAT44(uVar15,DAT_1419fd808);
        FUN_140e634e0(param_1,param_2,&local_218,3,uVar20,ppdVar18);
      }
LAB_1400cdb80:
    }
    local_1e8 = 0x91;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    uVar15 = (undefined4)(uVar20 >> 0x20);
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    if (pdVar8 != &local_1c8) {
      local_228 = *pdVar8;
      uStack_220 = *(undefined4 *)(pdVar8 + 1);
      uStack_21c = *(uint *)((longlong)pdVar8 + 0xc);
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_228);
    }
    local_148 = &local_1c8;
    FUN_140e645a0(&local_228,gml_Script___InputRegisterUpdate,param_1);
    local_1d8 = local_228;
    uStack_1d0 = uStack_220;
    uStack_1cc = uStack_21c;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_1d8);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_140 = &local_1b8;
    ppdVar18 = &local_148;
    uVar20 = CONCAT44(uVar15,DAT_141a02658);
    FUN_140e634e0(param_1,param_2,&local_218,2,uVar20,ppdVar18);
  }
  local_1e8 = 0x98;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02bb8);
  FUN_140e609c0(param_1);
  if (puVar4 != &DAT_1419df7b0) {
    local_228 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_220 = DAT_1419df7b8;
    uStack_21c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_228);
  }
  FUN_140e60910(1);
  local_1e8 = 0x99;
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  uStack_1fc = 0;
  local_208 = 0.0;
  local_1e8 = 0x9c;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  plVar11 = (longlong *)(**(code **)(*DAT_141ddc800 + 8))(DAT_141ddc800,DAT_141a026b8);
  iVar14 = FUN_140e4a740(&local_208);
  if (((*(uint *)((longlong)plVar11 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar11, lVar1 != 0)) {
    if ((iVar14 < 0) || (*(int *)(lVar1 + 0x24) <= iVar14)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar14,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar13 = (longlong *)0x0;
    }
    else {
      plVar13 = (longlong *)((longlong)iVar14 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar13 = plVar11;
  }
  FUN_140e87440(plVar13,DAT_1419fd598,0x80000000,&local_98,uVar20 & 0xffffffffffffff00,
                (ulonglong)ppdVar18 & 0xffffffffffffff00);
  iVar14 = FUN_140e4a740(&local_208);
  if (((*(uint *)((longlong)plVar11 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar11, lVar1 != 0)) {
    if ((iVar14 < 0) || (*(int *)(lVar1 + 0x24) <= iVar14)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar14,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = (longlong *)((longlong)iVar14 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  uVar6 = FUN_140069500(plVar11);
  FUN_140e63610(uVar6,param_2,&local_218,0,&local_98,0);
  local_1e8 = 0x9e;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02bb8);
  iVar14 = FUN_140e851f0(uVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar14 == 0) {
    local_1e8 = 0xa0;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    local_148 = &local_208;
    uVar6 = gml_Script_InputPlayerLowestConnectedIndex(param_1,param_2,&local_218,1,&local_148);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 != '\0') {
      local_1e8 = 0xa2;
      pdVar8 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02bb8);
      FUN_140e609c0(param_1);
      if (&local_208 != pdVar8) {
        local_228 = local_208;
        uStack_220 = uStack_200;
        uStack_21c = uStack_1fc;
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar8);
        }
        FUN_140041b80(pdVar8,&local_228);
      }
      FUN_140e60910(1);
    }
  }
  local_1e8 = 0xa6;
  uVar17 = uStack_1fc & 0xffffff;
  if (uVar17 != 0) {
    if (uVar17 == 1) {
      local_208 = (double)FUN_140e4b060(&local_208);
      uStack_1fc = 0;
    }
    else {
      if (uVar17 == 7) {
        local_208 = (double)CONCAT44(local_208._4_4_,local_208._0_4_ + 1);
        goto LAB_1400cdff5;
      }
      if (uVar17 == 10) {
        local_208 = (double)((longlong)local_208 + 1);
        goto LAB_1400cdff5;
      }
      if (uVar17 != 0xd) {
        FUN_140042910(&DAT_14172c3d8,&local_208,&local_208);
        goto LAB_1400cdff5;
      }
      uStack_1fc = 0;
    }
  }
  local_208 = local_208 + 1.0;
LAB_1400cdff5:
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  _eh_vector_destructor_iterator_(&local_1c8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1f8;
  return param_3;
}

