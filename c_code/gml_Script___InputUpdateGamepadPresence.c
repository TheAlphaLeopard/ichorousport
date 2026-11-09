// gml_Script___InputUpdateGamepadPresence @ 0x1400c1a20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___InputUpdateGamepadPresence(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  double *pdVar12;
  double dVar13;
  longlong *plVar14;
  code *pcVar15;
  double **ppdVar16;
  double **in_stack_fffffffffffffdf0;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  double local_1e8;
  uint local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  char *local_1c0;
  undefined4 local_1b8;
  double local_1b0;
  uint local_1a4;
  double local_198;
  undefined4 local_18c;
  double local_188;
  undefined4 local_17c;
  undefined1 local_178 [12];
  undefined4 local_16c;
  undefined1 local_168 [12];
  undefined4 local_15c;
  undefined1 local_158 [12];
  undefined4 local_14c;
  undefined1 local_148 [12];
  undefined4 local_13c;
  undefined1 local_138 [12];
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  double local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double *local_f8;
  double *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_b0;
  undefined4 local_a4;
  longlong local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  double *local_80;
  undefined4 local_74;
  double *local_70;
  undefined4 local_64;
  
  local_1c0 = "gml_Script_anon@141@__InputRegisterCollect@__InputRegisterCollect";
  local_1c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1c8;
  local_1b8 = 5;
  pcVar15 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_198,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_1a4 = 0xffffff;
  local_1b0 = 0.0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0.0;
  local_10c = 0xffffff;
  local_118 = 0.0;
  local_64 = 0xffffff;
  local_70 = (double *)0x0;
  local_74 = 0xffffff;
  local_80 = (double *)0x0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_1fc = 0;
  local_208 = 0;
  local_1cc = 0;
  local_1d8 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc7b0) &&
     (_Init_thread_header(&DAT_141ddc7b0), DAT_141ddc7b0 == -1)) {
    DAT_141ddc7b8 = (longlong *)FUN_140e63aa0(DAT_141a02748);
    _Init_thread_footer(&DAT_141ddc7b0);
  }
  if (DAT_141ddc051 == '\0') {
    FUN_140e64380(DAT_141ddc7b8,"gml_Script_anon@141@__InputRegisterCollect@__InputRegisterCollect")
    ;
    FUN_140e64380(param_1,"gml_Script_anon@141@__InputRegisterCollect@__InputRegisterCollect");
  }
  local_1b8 = 7;
  if (DAT_141ddc051 == '\0') {
    DAT_141ddc051 = '\x01';
    puVar8 = (undefined8 *)(**(code **)(*DAT_141ddc7b8 + 0x10))(DAT_141ddc7b8,DAT_141a026b8);
    FUN_140e609c0(DAT_141ddc7b8);
    puVar9 = (undefined8 *)gml_Script___InputTrace(param_1,param_2,&local_208,0,0);
    if (puVar9 != puVar8) {
      local_1f8 = (double *)*puVar9;
      uStack_1f0 = *(undefined4 *)(puVar9 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_1f8);
    }
    FUN_140e60910(1);
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a011a8);
    puVar9 = (undefined8 *)(**(code **)(*DAT_141ddc7b8 + 0x10))(DAT_141ddc7b8,DAT_141a01188);
    FUN_140e609c0(DAT_141ddc7b8);
    if (puVar8 != puVar9) {
      local_1f8 = (double *)*puVar8;
      uStack_1f0 = *(undefined4 *)(puVar8 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_1f8);
    }
    FUN_140e60910(1);
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a027d8);
    puVar9 = (undefined8 *)(**(code **)(*DAT_141ddc7b8 + 0x10))(DAT_141ddc7b8,DAT_141a02788);
    FUN_140e609c0(DAT_141ddc7b8);
    if (puVar8 != puVar9) {
      local_1f8 = (double *)*puVar8;
      uStack_1f0 = *(undefined4 *)(puVar8 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_1f8);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    puVar8 = (undefined8 *)(**(code **)(*DAT_141ddc7b8 + 0x10))(DAT_141ddc7b8,DAT_1419fea88);
    FUN_140e609c0(DAT_141ddc7b8);
    FUN_140e645a0(&local_1f8,gml_Script___InputRegisterCollect,0);
    in_stack_fffffffffffffdf0 = (double **)0x0;
    pcVar15 = (code *)&local_1f8;
    puVar9 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_1d8,0,pcVar15,0);
    if (puVar9 != puVar8) {
      local_108 = *puVar9;
      uStack_100 = *(undefined4 *)(puVar9 + 1);
      uStack_fc = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_108);
    }
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140e60910(1);
  }
  local_1b8 = 0x33;
  cVar2 = FUN_140eab100(1);
  if (cVar2 != '\0') {
    local_1b8 = 0x37;
    cVar2 = FUN_140eab100(0x12);
    if (cVar2 != '\0') {
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      uVar7 = (undefined4)((ulonglong)pcVar15 >> 0x20);
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      local_1f8 = (double *)CONCAT44(uRam00000001419e1944,_DAT_1419e1940);
      uStack_1f0 = uRam00000001419e1948;
      uStack_1ec = uRam00000001419e194c;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_1f8);
      local_f8 = &local_198;
      in_stack_fffffffffffffdf0 = &local_f8;
      pcVar15 = (code *)CONCAT44(uVar7,DAT_141a02738);
      uVar10 = FUN_140e634e0(param_1,param_2,&local_1d8,1,pcVar15,in_stack_fffffffffffffdf0);
      cVar2 = FUN_140e491e0(uVar10);
      if (cVar2 != '\0') {
        local_1b8 = 0x3a;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        uVar7 = (undefined4)((ulonglong)pcVar15 >> 0x20);
        local_128 = 0;
        local_120 = 0;
        local_11c = 5;
        local_1f8 = (double *)CONCAT44(uRam00000001419e1974,_DAT_1419e1970);
        uStack_1f0 = uRam00000001419e1978;
        uStack_1ec = uRam00000001419e197c;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        FUN_140041b80(&local_188,&local_1f8);
        local_f0 = &local_188;
        uVar10 = CONCAT44(uVar7,DAT_141a02718);
        FUN_140e634e0(param_1,param_2,&local_128,1,uVar10,&local_f0);
        uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
        local_1b8 = 0x3b;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        local_1f8 = (double *)CONCAT44(uRam00000001419e1944,_DAT_1419e1940);
        uStack_1f0 = uRam00000001419e1948;
        uStack_1ec = uRam00000001419e194c;
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        FUN_140041b80(&local_198,&local_1f8);
        local_f8 = &local_198;
        uVar10 = CONCAT44(uVar7,DAT_141a02718);
        FUN_140e634e0(param_1,param_2,&local_208,1,uVar10,&local_f8);
        uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
        local_1b8 = 0x3c;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        local_1f8 = (double *)CONCAT44(uRam00000001419e1994,_DAT_1419e1990);
        uStack_1f0 = uRam00000001419e1998;
        uStack_1ec = uRam00000001419e199c;
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        FUN_140041b80(&local_198,&local_1f8);
        local_f8 = &local_198;
        uVar10 = CONCAT44(uVar7,DAT_141a02718);
        FUN_140e634e0(param_1,param_2,&local_208,1,uVar10,&local_f8);
        uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
        local_1b8 = 0x3d;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        local_1f8 = (double *)CONCAT44(uRam00000001419e19a4,_DAT_1419e19a0);
        uStack_1f0 = uRam00000001419e19a8;
        uStack_1ec = uRam00000001419e19ac;
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        FUN_140041b80(&local_198,&local_1f8);
        local_f8 = &local_198;
        in_stack_fffffffffffffdf0 = &local_f8;
        pcVar15 = (code *)CONCAT44(uVar7,DAT_141a02718);
        FUN_140e634e0(param_1,param_2,&local_208,1,pcVar15,in_stack_fffffffffffffdf0);
      }
    }
    local_1b8 = 0x40;
    cVar2 = FUN_140eab100(0xe6);
    if (cVar2 != '\0') {
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      uVar7 = (undefined4)((ulonglong)pcVar15 >> 0x20);
      local_208 = 0;
      local_200 = 0;
      local_1fc = 5;
      local_1f8 = (double *)CONCAT44(uRam00000001419e1964,_DAT_1419e1960);
      uStack_1f0 = uRam00000001419e1968;
      uStack_1ec = uRam00000001419e196c;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_1f8);
      local_f8 = &local_198;
      in_stack_fffffffffffffdf0 = &local_f8;
      pcVar15 = (code *)CONCAT44(uVar7,DAT_141a02738);
      uVar10 = FUN_140e634e0(param_1,param_2,&local_208,1,pcVar15,in_stack_fffffffffffffdf0);
      cVar2 = FUN_140e491e0(uVar10);
      if (cVar2 == '\0') {
        local_1b8 = 0x43;
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        uVar7 = (undefined4)((ulonglong)pcVar15 >> 0x20);
        local_1d8 = 0;
        local_1d0 = 0;
        local_1cc = 5;
        local_1f8 = (double *)CONCAT44(uRam00000001419e1964,_DAT_1419e1960);
        uStack_1f0 = uRam00000001419e1968;
        uStack_1ec = uRam00000001419e196c;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        FUN_140041b80(&local_188,&local_1f8);
        local_f0 = &local_188;
        in_stack_fffffffffffffdf0 = &local_f0;
        pcVar15 = (code *)CONCAT44(uVar7,DAT_141a02718);
        FUN_140e634e0(param_1,param_2,&local_1d8,1,pcVar15,in_stack_fffffffffffffdf0);
      }
    }
  }
  local_1b8 = 0x76;
  uVar10 = (**(code **)(*param_1 + 8))(param_1,DAT_141a01448);
  cVar2 = FUN_140e491e0(uVar10);
  if (cVar2 != '\0') {
    local_1b8 = 0x78;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    in_stack_fffffffffffffdf0 = (double **)0x0;
    uVar10 = CONCAT44((int)((ulonglong)pcVar15 >> 0x20),DAT_1419febf8);
    FUN_140e634e0(param_1,param_2,&local_208,0,uVar10,0);
    uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
    local_1b8 = 0x7b;
    uVar10 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02088);
    cVar2 = FUN_140e491e0(uVar10);
    if (cVar2 != '\0') {
      local_1b8 = 0x7d;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_208 = 0;
      local_200 = 0;
      local_1fc = 5;
      uVar10 = CONCAT44(uVar7,DAT_1419febf8);
      plVar11 = (longlong *)FUN_140e634e0(param_1,param_2,&local_208,0,uVar10,0);
      uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
      if (plVar11 != &local_b0) {
        local_1f8 = (double *)*plVar11;
        uStack_1f0 = (undefined4)plVar11[1];
        uStack_1ec = *(undefined4 *)((longlong)plVar11 + 0xc);
        if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b0);
        }
        FUN_140041b80(&local_b0,&local_1f8);
      }
      local_1b8 = 0x7e;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_208 = 0;
      local_200 = 0;
      local_1fc = 5;
      in_stack_fffffffffffffdf0 = (double **)0x0;
      uVar10 = CONCAT44(uVar7,DAT_141a026e8);
      plVar11 = (longlong *)FUN_140e634e0(param_1,param_2,&local_208,0,uVar10,0);
      uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
      if (plVar11 != &local_a0) {
        local_1f8 = (double *)*plVar11;
        uStack_1f0 = (undefined4)plVar11[1];
        uStack_1ec = *(undefined4 *)((longlong)plVar11 + 0xc);
        if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a0);
        }
        FUN_140041b80(&local_a0,&local_1f8);
      }
      local_1b8 = 0x80;
      iVar3 = FUN_140e851f0(&local_a0,&local_b0,DAT_141955260,0);
      if (iVar3 != 0) {
        local_1b8 = 0x82;
        cVar2 = FUN_140e491e0(&local_b0);
        if (cVar2 == '\0') {
          local_1b8 = 0x88;
          if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          local_208 = 0;
          local_200 = 0;
          local_1fc = 5;
          in_stack_fffffffffffffdf0 = (double **)0x0;
          uVar10 = 0;
          uVar4 = DAT_141a02728;
        }
        else {
          local_1b8 = 0x84;
          if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          local_208 = 0;
          local_200 = 0;
          local_1fc = 5;
          local_1f8 = (double *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_1f0 = DAT_1419df7b8;
          uStack_1ec = DAT_1419df7bc;
          if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_198);
          }
          FUN_140041b80(&local_198,&local_1f8);
          local_f8 = &local_198;
          local_1f8 = (double *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_1f0 = DAT_1419df7b8;
          uStack_1ec = DAT_1419df7bc;
          if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          FUN_140041b80(&local_188,&local_1f8);
          local_f0 = &local_188;
          local_1f8 = (double *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_1f0 = DAT_1419df7b8;
          uStack_1ec = DAT_1419df7bc;
          if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_178);
          }
          FUN_140041b80(local_178,&local_1f8);
          local_e8 = local_178;
          local_1f8 = (double *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_1f0 = DAT_1419df7b8;
          uStack_1ec = DAT_1419df7bc;
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_168);
          }
          FUN_140041b80(local_168,&local_1f8);
          local_e0 = local_168;
          in_stack_fffffffffffffdf0 = &local_f8;
          uVar10 = 4;
          uVar4 = DAT_141a026c8;
        }
        FUN_140e634e0(param_1,param_2,&local_208,uVar10,CONCAT44(uVar7,uVar4),
                      in_stack_fffffffffffffdf0);
      }
    }
    local_1b8 = 0x8d;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    pcVar15 = (code *)0x0;
    uVar10 = gml_Script___InputStringContains(param_1,param_2,&local_208,0,0);
    cVar2 = FUN_140e491e0(uVar10);
    if (cVar2 != '\0') {
      local_1b8 = 0x94;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_208 = 0;
      local_200 = 0;
      local_1fc = 5;
      local_1f8 = (double *)CONCAT44(uRam0000000141dcb03c,_DAT_141dcb038);
      uStack_1f0 = uRam0000000141dcb040;
      uStack_1ec = DAT_141dcb044;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_1f8);
      local_f8 = &local_198;
      pcVar15 = (code *)&local_f8;
      gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                (param_1,param_2,&local_208,1,pcVar15);
      local_1b8 = 0x96;
      if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b0);
      }
      local_1a4 = 0;
      local_1b0 = 0.0;
      local_1b8 = 0x97;
      plVar11 = (longlong *)(**(code **)(*DAT_141ddc7b8 + 8))(DAT_141ddc7b8,DAT_141a01188);
      iVar3 = 0;
      if ((*(int *)((longlong)plVar11 + 0xc) == 2) && (*plVar11 != 0)) {
        iVar3 = *(int *)(*plVar11 + 0x24);
      }
      while (0 < iVar3) {
        iVar3 = iVar3 + -1;
        local_1b8 = 0x99;
        plVar11 = (longlong *)(**(code **)(*DAT_141ddc7b8 + 8))(DAT_141ddc7b8,DAT_141a01188);
        iVar5 = FUN_140e4a740(&local_1b0);
        if (((*(uint *)((longlong)plVar11 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar11, lVar1 != 0)
           ) {
          if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                          *(undefined4 *)(lVar1 + 0x24));
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        iVar5 = FUN_140e851f0(plVar11,&DAT_1419df7b0,DAT_141955260,0);
        if (iVar5 != 0) {
          local_1b8 = 0x9b;
          if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          local_208 = 0;
          local_200 = 0;
          local_1fc = 5;
          local_1f8 = (double *)CONCAT44(uRam00000001419e1984,_DAT_1419e1980);
          uStack_1f0 = uRam00000001419e1988;
          uStack_1ec = uRam00000001419e198c;
          if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_198);
          }
          FUN_140041b80(&local_198,&local_1f8);
          local_f8 = &local_198;
          local_f0 = &local_1b0;
          local_1f8 = (double *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
          uStack_1f0 = uRam00000001419df7c8;
          uStack_1ec = uRam00000001419df7cc;
          if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_178);
          }
          FUN_140041b80(local_178,&local_1f8);
          local_e8 = local_178;
          local_1f8 = (double *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_1f0 = DAT_1419df7b8;
          uStack_1ec = DAT_1419df7bc;
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_168);
          }
          FUN_140041b80(local_168,&local_1f8);
          local_e0 = local_168;
          local_1f8 = (double *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_1f0 = DAT_1419df7b8;
          uStack_1ec = DAT_1419df7bc;
          if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_158);
          }
          FUN_140041b80(local_158,&local_1f8);
          local_d8 = local_158;
          local_1f8 = (double *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_1f0 = DAT_1419df7b8;
          uStack_1ec = DAT_1419df7bc;
          if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_148);
          }
          FUN_140041b80(local_148,&local_1f8);
          local_d0 = local_148;
          local_1f8 = (double *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_1f0 = DAT_1419df7b8;
          uStack_1ec = DAT_1419df7bc;
          if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_138);
          }
          FUN_140041b80(local_138,&local_1f8);
          pcVar15 = (code *)&local_f8;
          local_c8 = local_138;
          gml_GlobalScript___InputPlugInRegisterCallbackInternal
                    (param_1,param_2,&local_208,7,pcVar15);
        }
        local_1b8 = 0x9e;
        uVar6 = local_1a4 & 0xffffff;
        if (uVar6 == 0) {
LAB_1400c29cd:
          local_1b0 = local_1b0 + 1.0;
        }
        else {
          if (uVar6 == 1) {
            local_1b0 = (double)FUN_140e4b060(&local_1b0);
            local_1a4 = 0;
            goto LAB_1400c29cd;
          }
          if (uVar6 == 7) {
            local_1b0 = (double)CONCAT44(local_1b0._4_4_,local_1b0._0_4_ + 1);
          }
          else if (uVar6 == 10) {
            local_1b0 = (double)((longlong)local_1b0 + 1);
          }
          else {
            if (uVar6 == 0xd) {
              local_1a4 = 0;
              goto LAB_1400c29cd;
            }
            FUN_140042910(&DAT_14172c3d8,&local_1b0,&local_1b0);
          }
        }
      }
    }
  }
  local_1b8 = 0xa3;
  FUN_140e85f80(param_1,DAT_1419fd2a8,0x80000000,&local_c0);
  uStack_fc = 0;
  local_108 = 0x408f400000000000;
  iVar3 = FUN_140e851f0(&local_c0,&local_108,DAT_141955260,1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if (0 < iVar3) {
    local_1b8 = 0xa5;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    pcVar15 = (code *)0x0;
    gml_Script_anon_945_anon_154___InputRegisterCollectPlayer___InputRegisterCollectPlayer
              (param_1,param_2,&local_208,0,0);
    local_1b8 = 0xa7;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1dc = 0;
    local_1e8 = 0.0;
    local_1b8 = 0xa8;
    plVar11 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a011a8);
    iVar3 = 0;
    if ((*(int *)((longlong)plVar11 + 0xc) == 2) && (*plVar11 != 0)) {
      iVar3 = *(int *)(*plVar11 + 0x24);
    }
    while (0 < iVar3) {
      uVar7 = (undefined4)((ulonglong)pcVar15 >> 0x20);
      iVar3 = iVar3 + -1;
      local_1b8 = 0xaa;
      pdVar12 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a011a8);
      iVar5 = FUN_140e4a740(&local_1e8);
      if (((*(uint *)((longlong)pdVar12 + 0xc) & 0xffffff) == 2) &&
         (dVar13 = *pdVar12, dVar13 != 0.0)) {
        if ((iVar5 < 0) || (*(int *)((longlong)dVar13 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)((longlong)dVar13 + 0x24));
          pdVar12 = (double *)0x0;
        }
        else {
          pdVar12 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar13 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (pdVar12 != &local_118) {
        local_1f8 = (double *)*pdVar12;
        uStack_1f0 = *(undefined4 *)(pdVar12 + 1);
        uStack_1ec = *(undefined4 *)((longlong)pdVar12 + 0xc);
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_1f8);
      }
      local_1b8 = 0xab;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_208 = 0;
      local_200 = 0;
      local_1fc = 5;
      local_f8 = &local_118;
      in_stack_fffffffffffffdf0 = &local_f8;
      pcVar15 = (code *)CONCAT44(uVar7,DAT_1419fcb88);
      uVar10 = FUN_140e634e0(param_1,param_2,&local_208,1,pcVar15,in_stack_fffffffffffffdf0);
      cVar2 = FUN_140e491e0(uVar10);
      if (cVar2 != '\0') {
        local_1b8 = 0xad;
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        local_1d8 = 0;
        local_1d0 = 0;
        local_1cc = 5;
        FUN_140e87440(&local_118,DAT_1419fd2c8,0x80000000,&local_70,
                      (ulonglong)pcVar15 & 0xffffffffffffff00,
                      (ulonglong)in_stack_fffffffffffffdf0 & 0xffffffffffffff00);
        switch(local_10c) {
        default:
switchD_1400c2ca8_caseD_1:
          dVar13 = 0.0;
          break;
        case 6:
          dVar13 = local_118;
          break;
        case 0xf:
          iVar5 = (int)((ulonglong)local_118 >> 0x20);
          if ((iVar5 != 0x1000000) && (iVar5 != 0x4000001)) goto switchD_1400c2ca8_caseD_1;
        case 0:
        case 7:
        case 10:
        case 0xd:
          uVar7 = FUN_140e4a8b0(&local_118);
          dVar13 = (double)FUN_140e87250(uVar7);
        }
        in_stack_fffffffffffffdf0 = (double **)0x0;
        pcVar15 = (code *)&local_70;
        FUN_140e63610(dVar13,param_2,&local_1d8,0,pcVar15,0);
      }
      local_1b8 = 0xb0;
      uVar6 = local_1dc & 0xffffff;
      if (uVar6 == 0) {
LAB_1400c2d53:
        local_1e8 = local_1e8 + 1.0;
      }
      else {
        if (uVar6 == 1) {
          local_1e8 = (double)FUN_140e4b060(&local_1e8);
          local_1dc = 0;
          goto LAB_1400c2d53;
        }
        if (uVar6 == 7) {
          local_1e8 = (double)CONCAT44(local_1e8._4_4_,local_1e8._0_4_ + 1);
        }
        else if (uVar6 == 10) {
          local_1e8 = (double)((longlong)local_1e8 + 1);
        }
        else {
          if (uVar6 == 0xd) {
            local_1dc = 0;
            goto LAB_1400c2d53;
          }
          FUN_140042910(&DAT_14172c3d8,&local_1e8,&local_1e8);
        }
      }
    }
  }
  local_1b8 = 0xb5;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1dc = 0;
  local_1e8 = 0.0;
  local_1b8 = 0xb6;
  plVar11 = (longlong *)(**(code **)(*DAT_141ddc7b8 + 8))(DAT_141ddc7b8,DAT_141a02788);
  iVar3 = 0;
  if ((*(int *)((longlong)plVar11 + 0xc) == 2) && (*plVar11 != 0)) {
    iVar3 = *(int *)(*plVar11 + 0x24);
  }
  while (0 < iVar3) {
    iVar3 = iVar3 + -1;
    local_1b8 = 0xb8;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    plVar11 = (longlong *)(**(code **)(*DAT_141ddc7b8 + 8))(DAT_141ddc7b8,DAT_141a02788);
    iVar5 = FUN_140e4a740(&local_1e8);
    if (((*(uint *)((longlong)plVar11 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar11, lVar1 != 0)) {
      if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar14 = (longlong *)0x0;
      }
      else {
        plVar14 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar14 = plVar11;
    }
    FUN_140e87440(plVar14,DAT_1419fd598,0x80000000,&local_80,(ulonglong)pcVar15 & 0xffffffffffffff00
                  ,(ulonglong)in_stack_fffffffffffffdf0 & 0xffffffffffffff00);
    iVar5 = FUN_140e4a740(&local_1e8);
    if (((*(uint *)((longlong)plVar11 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar11, lVar1 != 0)) {
      if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    uVar10 = FUN_140069500(plVar11);
    in_stack_fffffffffffffdf0 = (double **)0x0;
    pcVar15 = (code *)&local_80;
    FUN_140e63610(uVar10,param_2,&local_208,0,pcVar15,0);
    local_1b8 = 0xb9;
    uVar6 = local_1dc & 0xffffff;
    if (uVar6 == 0) {
LAB_1400c2f9d:
      local_1e8 = local_1e8 + 1.0;
    }
    else {
      if (uVar6 == 1) {
        local_1e8 = (double)FUN_140e4b060(&local_1e8);
        local_1dc = 0;
        goto LAB_1400c2f9d;
      }
      if (uVar6 == 7) {
        local_1e8 = (double)CONCAT44(local_1e8._4_4_,local_1e8._0_4_ + 1);
      }
      else if (uVar6 == 10) {
        local_1e8 = (double)((longlong)local_1e8 + 1);
      }
      else {
        if (uVar6 == 0xd) {
          local_1dc = 0;
          goto LAB_1400c2f9d;
        }
        FUN_140042910(&DAT_14172c3d8,&local_1e8,&local_1e8);
      }
    }
  }
  local_1b8 = 0xbf;
  uVar10 = (**(code **)(*param_1 + 8))(param_1,DAT_141a026f8);
  cVar2 = FUN_140e491e0(uVar10);
  if (cVar2 != '\0') {
    local_1b8 = 0xc3;
    plVar11 = (longlong *)(**(code **)(*DAT_141ddc7b8 + 8))(DAT_141ddc7b8,DAT_141a026b8);
    FUN_140e85f80(param_1,DAT_1419fd2a8,0x80000000,&local_c0);
    if (((*(uint *)((longlong)plVar11 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar11, lVar1 != 0)) {
      if (*(int *)(lVar1 + 0x24) < 1) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11 = *(longlong **)(lVar1 + 8);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    FUN_140e87440(plVar11,DAT_1419fd748,0x80000000,&local_90,(ulonglong)pcVar15 & 0xffffffffffffff00
                  ,(ulonglong)in_stack_fffffffffffffdf0 & 0xffffffffffffff00);
    uStack_fc = local_b4;
    uStack_100 = local_b8;
    if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) == 0) {
      local_108 = local_c0;
    }
    else {
      FUN_1400419b0(&local_108,&local_c0);
    }
    FUN_1400462a0(&local_108,&local_90);
    uStack_1ec = 0;
    local_1f8 = (double *)0x407f400000000000;
    iVar3 = FUN_140e851f0(&local_108,&local_1f8,DAT_141955260,1);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if (0 < iVar3) {
      local_1b8 = 0xc6;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_208 = 0;
      local_200 = 0;
      local_1fc = 5;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      local_1f8 = (double *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_1f0 = DAT_1419df7b8;
      uStack_1ec = DAT_1419df7bc;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_1f8);
      local_f8 = &local_198;
      pdVar12 = (double *)
                gml_Script_InputPlayerGetGamepadType(param_1,param_2,&local_1d8,1,&local_f8);
      if (pdVar12 != &local_188) {
        local_1f8 = (double *)*pdVar12;
        uStack_1f0 = *(undefined4 *)(pdVar12 + 1);
        uStack_1ec = *(undefined4 *)((longlong)pdVar12 + 0xc);
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        FUN_140041b80(&local_188,&local_1f8);
      }
      local_f0 = &local_188;
      uVar10 = gml_Script_InputDeviceIsAvailable(param_1,param_2,&local_208,1,&local_f0);
      cVar2 = FUN_140e491e0(uVar10);
      if (cVar2 == '\0') {
        local_1b8 = 200;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_128 = 0;
        local_120 = 0;
        local_11c = 5;
        pdVar12 = (double *)
                  gml_Script_InputDeviceGetNewActivityOnVerb(param_1,param_2,&local_128,0,0);
        if (pdVar12 != &local_1b0) {
          local_1f8 = (double *)*pdVar12;
          uStack_1f0 = *(undefined4 *)(pdVar12 + 1);
          uStack_1ec = *(undefined4 *)((longlong)pdVar12 + 0xc);
          if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b0);
          }
          FUN_140041b80(&local_1b0,&local_1f8);
        }
        local_1b8 = 0xc9;
        uStack_1ec = 0;
        local_1f8 = (double *)&DAT_bff0000000000000;
        iVar3 = FUN_140e851f0(&local_1b0,&local_1f8,DAT_141955260,0);
        if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        if (iVar3 != 0) {
          local_1b8 = 0xcb;
          if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          local_208 = 0;
          local_200 = 0;
          local_1fc = 5;
          local_f8 = &local_1b0;
          local_1f8 = (double *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_1f0 = DAT_1419df7b8;
          uStack_1ec = DAT_1419df7bc;
          if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          FUN_140041b80(&local_188,&local_1f8);
          local_f0 = &local_188;
          ppdVar16 = &local_f8;
          FUN_14034f100(param_1,param_2,&local_208,2,ppdVar16);
          uVar7 = (undefined4)((ulonglong)ppdVar16 >> 0x20);
          local_1b8 = 0xcc;
          if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          local_208 = 0;
          local_200 = 0;
          local_1fc = 5;
          pdVar12 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a027e8);
          if (pdVar12 != &local_198) {
            local_1f8 = (double *)*pdVar12;
            uStack_1f0 = *(undefined4 *)(pdVar12 + 1);
            uStack_1ec = *(undefined4 *)((longlong)pdVar12 + 0xc);
            if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_198);
            }
            FUN_140041b80(&local_198,&local_1f8);
          }
          local_f8 = &local_198;
          uVar10 = FUN_140e634e0(param_1,param_2,&local_208,1,CONCAT44(uVar7,DAT_141a02278),
                                 &local_f8);
          cVar2 = FUN_140e491e0(uVar10);
          if (cVar2 != '\0') {
            local_1b8 = 0xcc;
            if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            local_1d8 = 0;
            local_1d0 = 0;
            local_1cc = 5;
            uVar10 = (**(code **)(*param_1 + 8))(param_1,DAT_141a027e8);
            FUN_140e63610(param_1,param_2,&local_1d8,0,uVar10,0);
          }
        }
      }
    }
  }
  local_1b8 = 0xd4;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1dc = 0;
  local_1e8 = 0.0;
  local_1b8 = 0xd7;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  local_1f8 = (double *)CONCAT44(uRam00000001419e19b4,_DAT_1419e19b0);
  uStack_1f0 = uRam00000001419e19b8;
  uStack_1ec = uRam00000001419e19bc;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_1f8);
  local_f8 = &local_198;
  local_f0 = &local_1e8;
  local_1f8 = (double *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_1f0 = DAT_1419df7b8;
  uStack_1ec = DAT_1419df7bc;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_1f8);
  local_e8 = local_178;
  local_1f8 = (double *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_1f0 = DAT_1419df7b8;
  uStack_1ec = DAT_1419df7bc;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_1f8);
  local_e0 = local_168;
  local_1f8 = (double *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_1f0 = DAT_1419df7b8;
  uStack_1ec = DAT_1419df7bc;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_1f8);
  local_d8 = local_158;
  local_1f8 = (double *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_1f0 = DAT_1419df7b8;
  uStack_1ec = DAT_1419df7bc;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_1f8);
  local_d0 = local_148;
  local_1f8 = (double *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_1f0 = DAT_1419df7b8;
  uStack_1ec = DAT_1419df7bc;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_1f8);
  local_c8 = local_138;
  gml_GlobalScript___InputPlugInRegisterCallbackInternal(param_1,param_2,&local_208,7,&local_f8);
  local_1b8 = 0xd8;
  uVar6 = local_1dc & 0xffffff;
  if (uVar6 != 0) {
    if (uVar6 == 1) {
      local_1e8 = (double)FUN_140e4b060(&local_1e8);
      local_1dc = 0;
    }
    else {
      if (uVar6 == 7) {
        local_1e8 = (double)CONCAT44(local_1e8._4_4_,local_1e8._0_4_ + 1);
        goto LAB_1400c3724;
      }
      if (uVar6 == 10) {
        local_1e8 = (double)((longlong)local_1e8 + 1);
        goto LAB_1400c3724;
      }
      if (uVar6 != 0xd) {
        FUN_140042910(&DAT_14172c3d8,&local_1e8,&local_1e8);
        goto LAB_1400c3724;
      }
      local_1dc = 0;
    }
  }
  local_1e8 = local_1e8 + 1.0;
LAB_1400c3724:
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  _eh_vector_destructor_iterator_(&local_198,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1c8;
  return param_3;
}

