// gml_Script___InputClassVerbDefinition @ 0x140050c70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___InputClassVerbDefinition
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined4 uVar13;
  undefined8 uVar11;
  undefined1 **ppuVar12;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  uint local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  longlong local_140;
  undefined4 local_134;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong *local_e8;
  longlong *local_e0;
  undefined1 *local_d8;
  undefined4 *local_d0;
  undefined1 *local_c8;
  longlong local_b8;
  undefined4 local_ac;
  longlong local_a8;
  undefined4 local_9c;
  undefined1 local_98 [12];
  undefined4 local_8c;
  undefined4 local_88 [3];
  undefined4 local_7c;
  undefined1 local_78 [12];
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  local_150 = "gml_Script___InputClassRebindingHandler";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 7;
  uVar13 = 1;
  _eh_vector_constructor_iterator_(&local_b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_5c = 0xffffff;
  local_68 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_16c = 0xffffff;
  local_178 = 0.0;
  local_134 = 0xffffff;
  local_140 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_18c = 0;
  local_198 = 0;
  local_15c = 0;
  local_168 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc244) &&
     (_Init_thread_header(&DAT_141ddc244), DAT_141ddc244 == -1)) {
    DAT_141ddc248 = (longlong *)FUN_140e63aa0(DAT_1419fdc28);
    _Init_thread_footer(&DAT_141ddc244);
  }
  if (DAT_141ddc02f == '\0') {
    FUN_140e64380(DAT_141ddc248,"gml_Script___InputClassRebindingHandler");
    FUN_140e64380(param_1,"gml_Script___InputClassRebindingHandler");
  }
  FUN_140e643a0(param_1,DAT_141ddc248);
  local_148 = 0x56;
  if (DAT_141ddc02f == '\0') {
    DAT_141ddc02f = '\x01';
    puVar5 = (undefined8 *)(**(code **)(*DAT_141ddc248 + 0x10))(DAT_141ddc248,DAT_1419fd598);
    FUN_140e609c0(DAT_141ddc248);
    FUN_140e645a0(&local_118,gml_GlobalScript___InputClassVerbDefinition,0);
    if (&local_118 != puVar5) {
      local_188 = (undefined4)local_118;
      uStack_184 = local_118._4_4_;
      uStack_180 = uStack_110;
      uStack_17c = uStack_10c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_188);
    }
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140e60910(1);
  }
  local_148 = 9;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd5c8);
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)*param_5;
  }
  if (puVar9 != puVar5) {
    local_188 = *(undefined4 *)puVar9;
    uStack_184 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_180 = *(undefined4 *)(puVar9 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_188);
  }
  FUN_140e60910(1);
  local_148 = 0xb;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdba8);
  FUN_140e85f80(param_1,DAT_1419fd2a8,0x80000000,&local_68);
  FUN_140e609c0(param_1);
  if (&local_68 != puVar5) {
    local_188 = (undefined4)local_68;
    uStack_184 = local_68._4_4_;
    uStack_180 = uStack_60;
    uStack_17c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_188);
  }
  FUN_140e60910(1);
  local_148 = 0xe;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  if (param_4 < 2) {
    plVar7 = &DAT_1419df7b0;
LAB_140050fc8:
    local_188 = (undefined4)*plVar7;
    uStack_184 = *(undefined4 *)((longlong)plVar7 + 4);
    uStack_180 = (undefined4)plVar7[1];
    uStack_17c = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_188);
  }
  else {
    plVar7 = (longlong *)param_5[1];
    if (plVar7 != &local_b8) goto LAB_140050fc8;
  }
  local_e8 = &local_b8;
  uVar11 = CONCAT44(uVar13,DAT_1419fcb88);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_198,1,uVar11,&local_e8);
  uVar13 = (undefined4)((ulonglong)uVar11 >> 0x20);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 == '\0') {
    local_148 = 0x13;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    if (param_4 < 2) {
      plVar7 = &DAT_1419df7b0;
LAB_14005109c:
      local_188 = (undefined4)*plVar7;
      uStack_184 = *(undefined4 *)((longlong)plVar7 + 4);
      uStack_180 = (undefined4)plVar7[1];
      uStack_17c = *(undefined4 *)((longlong)plVar7 + 0xc);
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_188);
    }
    else {
      plVar7 = (longlong *)param_5[1];
      if (plVar7 != &local_b8) goto LAB_14005109c;
    }
    local_e8 = &local_b8;
    uVar11 = CONCAT44(uVar13,DAT_1419fdc08);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_198,1,uVar11,&local_e8);
    uVar13 = (undefined4)((ulonglong)uVar11 >> 0x20);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 != '\0') {
      local_148 = 0x16;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      uVar6 = CONCAT44(uVar13,DAT_1419fd6d8);
      puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_168,0,uVar6,0);
      uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
      goto LAB_14005115a;
    }
    local_148 = 0x18;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    if (param_4 < 2) {
      plVar7 = &DAT_1419df7b0;
LAB_1400511df:
      local_188 = (undefined4)*plVar7;
      uStack_184 = *(undefined4 *)((longlong)plVar7 + 4);
      uStack_180 = (undefined4)plVar7[1];
      uStack_17c = *(undefined4 *)((longlong)plVar7 + 0xc);
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_188);
    }
    else {
      plVar7 = (longlong *)param_5[1];
      if (plVar7 != &local_b8) goto LAB_1400511df;
    }
    local_e8 = &local_b8;
    uVar11 = CONCAT44(uVar13,DAT_1419fdb88);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_198,1,uVar11,&local_e8);
    uVar13 = (undefined4)((ulonglong)uVar11 >> 0x20);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 == '\0') {
      local_148 = 0x1a;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_f8 = 0;
      local_f0 = 0;
      local_ec = 5;
      if (param_4 < 2) {
        plVar7 = &DAT_1419df7b0;
LAB_1400512b7:
        local_188 = (undefined4)*plVar7;
        uStack_184 = *(undefined4 *)((longlong)plVar7 + 4);
        uStack_180 = (undefined4)plVar7[1];
        uStack_17c = *(undefined4 *)((longlong)plVar7 + 0xc);
        if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        FUN_140041b80(&local_a8,&local_188);
      }
      else {
        plVar7 = (longlong *)param_5[1];
        if (plVar7 != &local_a8) goto LAB_1400512b7;
      }
      local_e0 = &local_a8;
      local_188 = _DAT_141dc7ac8;
      uStack_184 = uRam0000000141dc7acc;
      uStack_180 = uRam0000000141dc7ad0;
      uStack_17c = DAT_141dc7ad4;
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_98);
      }
      FUN_140041b80(local_98,&local_188);
      local_d8 = local_98;
      puVar8 = (undefined4 *)
               FUN_140e634e0(param_1,param_2,&local_f8,1,CONCAT44(uVar13,DAT_1419fdc58),&local_e0);
      if (puVar8 != local_88) {
        local_188 = *puVar8;
        uStack_184 = puVar8[1];
        uStack_180 = puVar8[2];
        uStack_17c = puVar8[3];
        if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_88);
        }
        FUN_140041b80(local_88,&local_188);
      }
      local_d0 = local_88;
      local_188 = _DAT_141dc7ae8;
      uStack_184 = uRam0000000141dc7aec;
      uStack_180 = uRam0000000141dc7af0;
      uStack_17c = DAT_141dc7af4;
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_78);
      }
      FUN_140041b80(local_78,&local_188);
      local_c8 = local_78;
      ppuVar12 = &local_d8;
      FUN_14008e020(param_1,param_2,&local_168,3,ppuVar12);
      uVar13 = (undefined4)((ulonglong)ppuVar12 >> 0x20);
    }
    else {
      local_148 = 0x1e;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      puVar5 = (undefined8 *)CONCAT44(uVar13,DAT_1419fd6d8);
      puVar9 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_198,0,puVar5,0);
      if (puVar9 != &local_128) {
        local_188 = *(undefined4 *)puVar9;
        uStack_184 = *(undefined4 *)((longlong)puVar9 + 4);
        uStack_180 = *(undefined4 *)(puVar9 + 1);
        uStack_17c = *(undefined4 *)((longlong)puVar9 + 0xc);
        if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_188);
      }
      local_148 = 0x1f;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_16c = 0;
      local_178 = 0.0;
      if (param_4 < 2) {
        plVar7 = &DAT_1419df7b0;
      }
      else {
        plVar7 = (longlong *)param_5[1];
      }
      iVar10 = 0;
      if ((*(int *)((longlong)plVar7 + 0xc) == 2) && (*plVar7 != 0)) {
        iVar10 = *(int *)(*plVar7 + 0x24);
      }
      while (uVar13 = (undefined4)((ulonglong)puVar5 >> 0x20), 0 < iVar10) {
        iVar10 = iVar10 + -1;
        local_148 = 0x22;
        iVar3 = FUN_140e4a740(&local_178);
        if (param_4 < 2) {
          plVar7 = &DAT_1419df7b0;
        }
        else {
          plVar7 = (longlong *)param_5[1];
        }
        if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0))
        {
          if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar3,
                          *(undefined4 *)(lVar1 + 0x24));
            plVar7 = (longlong *)0x0;
          }
          else {
            plVar7 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        if (plVar7 != &local_140) {
          local_188 = (undefined4)*plVar7;
          uStack_184 = *(undefined4 *)((longlong)plVar7 + 4);
          uStack_180 = (undefined4)plVar7[1];
          uStack_17c = *(undefined4 *)((longlong)plVar7 + 0xc);
          if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_140);
          }
          FUN_140041b80(&local_140,&local_188);
        }
        local_148 = 0x25;
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        local_198 = 0;
        local_190 = 0;
        local_18c = 5;
        local_e8 = &local_140;
        uVar11 = CONCAT44(uVar13,DAT_1419fdbf8);
        uVar6 = FUN_140e634e0(param_1,param_2,&local_198,1,uVar11,&local_e8);
        uVar13 = (undefined4)((ulonglong)uVar11 >> 0x20);
        cVar2 = FUN_140e491e0(uVar6);
        if (cVar2 != '\0') {
          local_148 = 0x27;
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          local_168 = 0;
          local_160 = 0;
          local_15c = 5;
          local_e0 = &local_140;
          uVar6 = CONCAT44(uVar13,DAT_1419fdc48);
          plVar7 = (longlong *)FUN_140e634e0(param_1,param_2,&local_168,1,uVar6,&local_e0);
          uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
          if (plVar7 != &local_140) {
            local_188 = (undefined4)*plVar7;
            uStack_184 = *(undefined4 *)((longlong)plVar7 + 4);
            uStack_180 = (undefined4)plVar7[1];
            uStack_17c = *(undefined4 *)((longlong)plVar7 + 0xc);
            if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_140);
            }
            FUN_140041b80(&local_140,&local_188);
          }
        }
        local_148 = 0x2a;
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        local_198 = 0;
        local_190 = 0;
        local_18c = 5;
        local_e8 = &local_140;
        uStack_10c = 0xd;
        local_118 = 0x3ff0000000000000;
        uVar6 = FUN_140e634e0(param_1,param_2,&local_198,1,CONCAT44(uVar13,DAT_1419fcb18),&local_e8)
        ;
        puVar5 = &local_118;
        FUN_140e98ef0(param_1,param_2,&local_128,uVar6,puVar5);
        if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        local_148 = 0x2b;
        uVar4 = local_16c & 0xffffff;
        if (uVar4 == 0) {
LAB_140051774:
          local_178 = local_178 + 1.0;
        }
        else {
          if (uVar4 == 1) {
            local_178 = (double)FUN_140e4b060(&local_178);
            local_16c = 0;
            goto LAB_140051774;
          }
          if (uVar4 == 7) {
            local_178 = (double)CONCAT44(local_178._4_4_,local_178._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_178 = (double)((longlong)local_178 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_16c = 0;
              goto LAB_140051774;
            }
            FUN_140042910(&DAT_14172c3d8,&local_178,&local_178);
          }
        }
      }
    }
  }
  else {
    local_148 = 0x11;
    if (param_4 < 2) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)param_5[1];
LAB_14005115a:
      if (puVar5 == &local_128) goto LAB_140051794;
    }
    local_188 = *(undefined4 *)puVar5;
    uStack_184 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_180 = *(undefined4 *)(puVar5 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_188);
  }
LAB_140051794:
  local_148 = 0x30;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  if (param_4 < 3) {
    plVar7 = &DAT_1419df7b0;
LAB_1400517fc:
    local_188 = (undefined4)*plVar7;
    uStack_184 = *(undefined4 *)((longlong)plVar7 + 4);
    uStack_180 = (undefined4)plVar7[1];
    uStack_17c = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_188);
  }
  else {
    plVar7 = (longlong *)param_5[2];
    if (plVar7 != &local_b8) goto LAB_1400517fc;
  }
  local_e8 = &local_b8;
  uVar11 = CONCAT44(uVar13,DAT_1419fcb88);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_198,1,uVar11,&local_e8);
  uVar13 = (undefined4)((ulonglong)uVar11 >> 0x20);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 == '\0') {
    local_148 = 0x35;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    if (param_4 < 3) {
      plVar7 = &DAT_1419df7b0;
LAB_1400518df:
      local_188 = (undefined4)*plVar7;
      uStack_184 = *(undefined4 *)((longlong)plVar7 + 4);
      uStack_180 = (undefined4)plVar7[1];
      uStack_17c = *(undefined4 *)((longlong)plVar7 + 0xc);
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_188);
    }
    else {
      plVar7 = (longlong *)param_5[2];
      if (plVar7 != &local_b8) goto LAB_1400518df;
    }
    local_e8 = &local_b8;
    uVar11 = CONCAT44(uVar13,DAT_1419fdc08);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_198,1,uVar11,&local_e8);
    uVar13 = (undefined4)((ulonglong)uVar11 >> 0x20);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 == '\0') {
      local_148 = 0x3a;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      if (param_4 < 3) {
        plVar7 = &DAT_1419df7b0;
LAB_1400519c9:
        local_188 = (undefined4)*plVar7;
        uStack_184 = *(undefined4 *)((longlong)plVar7 + 4);
        uStack_180 = (undefined4)plVar7[1];
        uStack_17c = *(undefined4 *)((longlong)plVar7 + 0xc);
        if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        FUN_140041b80(&local_b8,&local_188);
      }
      else {
        plVar7 = (longlong *)param_5[2];
        if (plVar7 != &local_b8) goto LAB_1400519c9;
      }
      local_e8 = &local_b8;
      uVar11 = CONCAT44(uVar13,DAT_1419fdb88);
      uVar6 = FUN_140e634e0(param_1,param_2,&local_198,1,uVar11,&local_e8);
      uVar13 = (undefined4)((ulonglong)uVar11 >> 0x20);
      cVar2 = FUN_140e491e0(uVar6);
      if (cVar2 != '\0') {
        local_148 = 0x40;
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        local_198 = 0;
        local_190 = 0;
        local_18c = 5;
        puVar5 = (undefined8 *)CONCAT44(uVar13,DAT_1419fd6d8);
        puVar9 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_198,0,puVar5,0);
        if (puVar9 != &local_108) {
          local_188 = *(undefined4 *)puVar9;
          uStack_184 = *(undefined4 *)((longlong)puVar9 + 4);
          uStack_180 = *(undefined4 *)(puVar9 + 1);
          uStack_17c = *(undefined4 *)((longlong)puVar9 + 0xc);
          if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          FUN_140041b80(&local_108,&local_188);
        }
        local_148 = 0x41;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_16c = 0;
        local_178 = 0.0;
        if (param_4 < 3) {
          plVar7 = &DAT_1419df7b0;
        }
        else {
          plVar7 = (longlong *)param_5[2];
        }
        iVar10 = 0;
        if ((*(int *)((longlong)plVar7 + 0xc) == 2) && (*plVar7 != 0)) {
          iVar10 = *(int *)(*plVar7 + 0x24);
        }
        while (0 < iVar10) {
          uVar13 = (undefined4)((ulonglong)puVar5 >> 0x20);
          iVar10 = iVar10 + -1;
          local_148 = 0x44;
          iVar3 = FUN_140e4a740(&local_178);
          if (param_4 < 3) {
            plVar7 = &DAT_1419df7b0;
          }
          else {
            plVar7 = (longlong *)param_5[2];
          }
          if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)
             ) {
            if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
              FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar3,
                            *(undefined4 *)(lVar1 + 0x24));
              plVar7 = (longlong *)0x0;
            }
            else {
              plVar7 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
            }
          }
          else {
            FUN_140e632c0("trying to index variable that is not an array");
          }
          if (plVar7 != &local_140) {
            local_188 = (undefined4)*plVar7;
            uStack_184 = *(undefined4 *)((longlong)plVar7 + 4);
            uStack_180 = (undefined4)plVar7[1];
            uStack_17c = *(undefined4 *)((longlong)plVar7 + 0xc);
            if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_140);
            }
            FUN_140041b80(&local_140,&local_188);
          }
          local_148 = 0x47;
          if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_198);
          }
          local_198 = 0;
          local_190 = 0;
          local_18c = 5;
          local_e8 = &local_140;
          uVar11 = CONCAT44(uVar13,DAT_1419fdbf8);
          uVar6 = FUN_140e634e0(param_1,param_2,&local_198,1,uVar11,&local_e8);
          uVar13 = (undefined4)((ulonglong)uVar11 >> 0x20);
          cVar2 = FUN_140e491e0(uVar6);
          if (cVar2 != '\0') {
            local_148 = 0x49;
            if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_168);
            }
            local_168 = 0;
            local_160 = 0;
            local_15c = 5;
            local_e0 = &local_140;
            uVar6 = CONCAT44(uVar13,DAT_1419fdc48);
            plVar7 = (longlong *)FUN_140e634e0(param_1,param_2,&local_168,1,uVar6,&local_e0);
            uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
            if (plVar7 != &local_140) {
              local_188 = (undefined4)*plVar7;
              uStack_184 = *(undefined4 *)((longlong)plVar7 + 4);
              uStack_180 = (undefined4)plVar7[1];
              uStack_17c = *(undefined4 *)((longlong)plVar7 + 0xc);
              if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_140);
              }
              FUN_140041b80(&local_140,&local_188);
            }
          }
          local_148 = 0x4c;
          if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_198);
          }
          local_198 = 0;
          local_190 = 0;
          local_18c = 5;
          local_e8 = &local_140;
          uStack_10c = 0xd;
          local_118 = 0x3ff0000000000000;
          uVar6 = FUN_140e634e0(param_1,param_2,&local_198,1,CONCAT44(uVar13,DAT_1419fcb18),
                                &local_e8);
          puVar5 = &local_118;
          FUN_140e98ef0(param_1,param_2,&local_108,uVar6,puVar5);
          if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          local_148 = 0x4d;
          uVar4 = local_16c & 0xffffff;
          if (uVar4 == 0) {
LAB_140051f64:
            local_178 = local_178 + 1.0;
          }
          else {
            if (uVar4 == 1) {
              local_178 = (double)FUN_140e4b060(&local_178);
              local_16c = 0;
              goto LAB_140051f64;
            }
            if (uVar4 == 7) {
              local_178 = (double)CONCAT44(local_178._4_4_,local_178._0_4_ + 1);
            }
            else if (uVar4 == 10) {
              local_178 = (double)((longlong)local_178 + 1);
            }
            else {
              if (uVar4 == 0xd) {
                local_16c = 0;
                goto LAB_140051f64;
              }
              FUN_140042910(&DAT_14172c3d8,&local_178,&local_178);
            }
          }
        }
        goto LAB_140051f7d;
      }
      local_148 = 0x3c;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_f8 = 0;
      local_f0 = 0;
      local_ec = 5;
      if (param_4 < 3) {
        plVar7 = &DAT_1419df7b0;
LAB_140051aa1:
        local_188 = (undefined4)*plVar7;
        uStack_184 = *(undefined4 *)((longlong)plVar7 + 4);
        uStack_180 = (undefined4)plVar7[1];
        uStack_17c = *(undefined4 *)((longlong)plVar7 + 0xc);
        if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        FUN_140041b80(&local_a8,&local_188);
      }
      else {
        plVar7 = (longlong *)param_5[2];
        if (plVar7 != &local_a8) goto LAB_140051aa1;
      }
      local_e0 = &local_a8;
      local_188 = _DAT_141dc7ad8;
      uStack_184 = uRam0000000141dc7adc;
      uStack_180 = uRam0000000141dc7ae0;
      uStack_17c = DAT_141dc7ae4;
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_98);
      }
      FUN_140041b80(local_98,&local_188);
      local_d8 = local_98;
      puVar8 = (undefined4 *)
               FUN_140e634e0(param_1,param_2,&local_f8,1,CONCAT44(uVar13,DAT_1419fdc58),&local_e0);
      if (puVar8 != local_88) {
        local_188 = *puVar8;
        uStack_184 = puVar8[1];
        uStack_180 = puVar8[2];
        uStack_17c = puVar8[3];
        if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_88);
        }
        FUN_140041b80(local_88,&local_188);
      }
      local_d0 = local_88;
      local_188 = _DAT_141dc7ae8;
      uStack_184 = uRam0000000141dc7aec;
      uStack_180 = uRam0000000141dc7af0;
      uStack_17c = DAT_141dc7af4;
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_78);
      }
      FUN_140041b80(local_78,&local_188);
      local_c8 = local_78;
      FUN_14008e020(param_1,param_2,&local_168,3,&local_d8);
      goto LAB_140051f7d;
    }
    local_148 = 0x38;
    local_188 = (undefined4)DAT_1419df7b0;
    uStack_184 = DAT_1419df7b0._4_4_;
    uStack_180 = DAT_1419df7b8;
    uStack_17c = DAT_1419df7bc;
  }
  else {
    local_148 = 0x33;
    if (param_4 < 3) {
      local_188 = (undefined4)DAT_1419df7b0;
      uStack_184 = DAT_1419df7b0._4_4_;
      uStack_180 = DAT_1419df7b8;
      uStack_17c = DAT_1419df7bc;
    }
    else {
      puVar5 = (undefined8 *)param_5[2];
      if (puVar5 == &local_108) goto LAB_140051f7d;
      local_188 = *(undefined4 *)puVar5;
      uStack_184 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_180 = *(undefined4 *)(puVar5 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
    }
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_188);
LAB_140051f7d:
  local_148 = 0x51;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdc38);
  uStack_10c = 0xd;
  local_118 = 0x3ff0000000000000;
  if (&local_118 != puVar5) {
    local_188 = 0;
    uStack_184 = 0x3ff00000;
    uStack_180 = uStack_110;
    uStack_17c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_188);
  }
  local_148 = 0x52;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdc18);
  FUN_140e609c0(param_1);
  if (puVar5 != &DAT_1419df7b0) {
    local_188 = (undefined4)DAT_1419df7b0;
    uStack_184 = DAT_1419df7b0._4_4_;
    uStack_180 = DAT_1419df7b8;
    uStack_17c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_188);
  }
  FUN_140e60910(1);
  local_148 = 0x53;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdbd8);
  FUN_140e609c0(param_1);
  if (&local_128 != puVar5) {
    local_188 = (undefined4)local_128;
    uStack_184 = local_128._4_4_;
    uStack_180 = uStack_120;
    uStack_17c = uStack_11c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_188);
  }
  FUN_140e60910(1);
  local_148 = 0x54;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdb78);
  FUN_140e609c0(param_1);
  if (&local_108 != puVar5) {
    local_188 = (undefined4)local_108;
    uStack_184 = local_108._4_4_;
    uStack_180 = uStack_100;
    uStack_17c = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_188);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}

