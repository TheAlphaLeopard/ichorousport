// gml_Script_InputVerbConsumeAll @ 0x140370f00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputVerbConsumeAll
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 uVar15;
  ulonglong **ppuVar14;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  ulonglong local_1a8 [2];
  longlong local_198 [2];
  ulonglong local_188 [2];
  longlong local_178 [2];
  undefined1 local_168 [12];
  byte local_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_134;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  ulonglong *local_108;
  longlong *local_100;
  ulonglong *local_f8;
  longlong *local_f0;
  undefined1 *local_e8;
  ulonglong local_e0;
  uint local_d4;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint local_a8 [2];
  undefined8 *local_a0;
  undefined1 local_98 [16];
  longlong local_88;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_150 = "gml_Script_InputVerbConsume";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 10;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_a8,param_4,2,param_5);
  uVar15 = 1;
  _eh_vector_constructor_iterator_(local_1a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_1cc = 0;
  local_1d8 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde7ac) &&
     (_Init_thread_header(&DAT_141dde7ac), DAT_141dde7ac == -1)) {
    DAT_141dde7b0 = (longlong *)FUN_140e63aa0(DAT_1419f3b08);
    _Init_thread_footer(&DAT_141dde7ac);
  }
  local_148 = 10;
  uVar12 = (ulonglong)local_a8[0];
  if ((int)local_a8[0] < 2) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_a0[1];
  }
  iVar4 = FUN_140e851f0(puVar10,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_148 = 10;
    if ((int)local_a8[0] < 2) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)local_a0[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
    *puVar10 = 0;
  }
  if (DAT_141ddc142 == '\0') {
    FUN_140e64380(DAT_141dde7b0,"gml_Script_InputVerbConsume");
    FUN_140e64380(local_res8,"gml_Script_InputVerbConsume");
  }
  local_148 = 0xc;
  if (DAT_141ddc142 == '\0') {
    DAT_141ddc142 = '\x01';
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    puVar6 = (ulonglong *)(**(code **)(*DAT_141dde7b0 + 0x10))(DAT_141dde7b0,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde7b0);
    uVar15 = 0;
    puVar7 = (ulonglong *)gml_Script___InputTrace(local_res8,local_res10,&local_1d8,0,0);
    if (puVar7 != puVar6) {
      local_1c8 = *puVar7;
      uStack_1c0 = (undefined4)puVar7[1];
      uStack_1bc = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_1c8);
    }
    FUN_140e60910(1);
  }
  local_148 = 4;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  if ((int)local_a8[0] < 2) {
    puVar6 = &DAT_1419df7b0;
LAB_1403711dd:
    local_1c8 = *puVar6;
    uStack_1c0 = (undefined4)puVar6[1];
    uStack_1bc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_1a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_1c8);
  }
  else {
    puVar6 = (ulonglong *)local_a0[1];
    if (puVar6 != local_1a8) goto LAB_1403711dd;
  }
  local_108 = local_1a8;
  ppuVar14 = (ulonglong **)CONCAT44(uVar15,DAT_141a014a8);
  uVar8 = FUN_140e634e0(local_res8,local_res10,&local_1d8,1,ppuVar14,&local_108);
  cVar3 = FUN_140e491e0(uVar8);
  uVar15 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
  if (cVar3 == '\0') {
    local_148 = 5;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    if ((int)local_a8[0] < 2) {
      plVar9 = &DAT_1419df7b0;
LAB_1403712d0:
      local_1c8 = *plVar9;
      uStack_1c0 = (undefined4)plVar9[1];
      uStack_1bc = *(undefined4 *)((longlong)plVar9 + 0xc);
      if ((1 << ((byte)local_198[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_198);
      }
      FUN_140041b80(local_198,&local_1c8);
    }
    else {
      plVar9 = (longlong *)local_a0[1];
      if (plVar9 != local_198) goto LAB_1403712d0;
    }
    local_100 = local_198;
    local_1c8 = CONCAT44(uRam0000000141dd1a4c,_DAT_141dd1a48);
    uStack_1c0 = uRam0000000141dd1a50;
    uStack_1bc = DAT_141dd1a54;
    if ((1 << ((byte)local_188[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_1c8);
    local_f8 = local_188;
    plVar9 = (longlong *)
             FUN_140e634e0(local_res8,local_res10,&local_118,1,CONCAT44(uVar15,DAT_1419fdc58),
                           &local_100);
    if (plVar9 != local_178) {
      local_1c8 = *plVar9;
      uStack_1c0 = (undefined4)plVar9[1];
      uStack_1bc = *(undefined4 *)((longlong)plVar9 + 0xc);
      if ((1 << ((byte)local_178[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      FUN_140041b80(local_178,&local_1c8);
    }
    local_f0 = local_178;
    local_1c8 = CONCAT44(uRam0000000141dd1a5c,_DAT_141dd1a58);
    uStack_1c0 = uRam0000000141dd1a60;
    uStack_1bc = DAT_141dd1a64;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1c8);
    local_e8 = local_168;
    ppuVar14 = &local_f8;
    FUN_14008e020(local_res8,local_res10,&local_1b8,3,ppuVar14);
  }
  local_148 = 0xc;
  if ((int)local_a8[0] < 2) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_a0[1];
  }
  local_134 = 0;
  local_140 = 0x3ff0000000000000;
  uVar5 = FUN_140e851f0(puVar10,&local_140,DAT_141955260,1);
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if (uVar5 < 0x80000000) {
    local_148 = 0x10;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    local_1c8 = CONCAT44(uRam0000000141dd1a2c,_DAT_141dd1a28);
    uStack_1c0 = uRam0000000141dd1a30;
    uStack_1bc = DAT_141dd1a34;
    if ((1 << ((byte)local_1a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_1c8);
    local_108 = local_1a8;
    if ((int)local_a8[0] < 2) {
      plVar9 = &DAT_1419df7b0;
LAB_140371514:
      local_1c8 = *plVar9;
      uStack_1c0 = (undefined4)plVar9[1];
      uStack_1bc = *(undefined4 *)((longlong)plVar9 + 0xc);
      if ((1 << ((byte)local_198[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_198);
      }
      FUN_140041b80(local_198,&local_1c8);
    }
    else {
      plVar9 = (longlong *)local_a0[1];
      if (plVar9 != local_198) goto LAB_140371514;
    }
    local_100 = local_198;
    local_1c8 = CONCAT44(uRam0000000141dd1a3c,_DAT_141dd1a38);
    uStack_1c0 = uRam0000000141dd1a40;
    uStack_1bc = DAT_141dd1a44;
    if ((1 << ((byte)local_188[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_1c8);
    local_f8 = local_188;
    local_1c8 = CONCAT44(uRam00000001419e4504,_DAT_1419e4500);
    uStack_1c0 = uRam00000001419e4508;
    uStack_1bc = uRam00000001419e450c;
    if ((1 << ((byte)local_178[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_1c8);
    local_f0 = local_178;
    local_1c8 = CONCAT44(uRam0000000141dd1a6c,_DAT_141dd1a68);
    uStack_1c0 = uRam0000000141dd1a70;
    uStack_1bc = DAT_141dd1a74;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1c8);
    local_e8 = local_168;
    ppuVar14 = &local_108;
    FUN_14008e020(local_res8,local_res10,&local_1d8,5,&local_108);
  }
  local_148 = 0x17;
  if ((int)local_a8[0] < 2) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_a0[1];
  }
  local_134 = 0;
  local_140 = 0;
  iVar4 = FUN_140e851f0(puVar10,&local_140,DAT_141955260,1);
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if (iVar4 == -2 || -1 < iVar4) goto LAB_1403717ba;
  local_148 = 0x1a;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  local_1c8 = CONCAT44(uRam0000000141dd1a2c,_DAT_141dd1a28);
  uStack_1c0 = uRam0000000141dd1a30;
  uStack_1bc = DAT_141dd1a34;
  if ((1 << ((byte)local_1a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_1c8);
  local_108 = local_1a8;
  if ((int)local_a8[0] < 2) {
    plVar9 = &DAT_1419df7b0;
LAB_14037171b:
    local_1c8 = *plVar9;
    uStack_1c0 = (undefined4)plVar9[1];
    uStack_1bc = *(undefined4 *)((longlong)plVar9 + 0xc);
    if ((1 << ((byte)local_198[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_1c8);
  }
  else {
    plVar9 = (longlong *)local_a0[1];
    if (plVar9 != local_198) goto LAB_14037171b;
  }
  local_100 = local_198;
  local_1c8 = CONCAT44(uRam0000000141dd1a1c,_DAT_141dd1a18);
  uStack_1c0 = uRam0000000141dd1a20;
  uStack_1bc = DAT_141dd1a24;
  if ((1 << ((byte)local_188[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_1c8);
  local_f8 = local_188;
  ppuVar14 = &local_108;
  FUN_14008e020(local_res8,local_res10,&local_1d8,3,&local_108);
LAB_1403717ba:
  local_148 = 0x10;
  plVar9 = (longlong *)(**(code **)(*DAT_141dde7b0 + 8))(DAT_141dde7b0,DAT_141a026b8);
  if ((int)local_a8[0] < 2) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_a0[1];
  }
  iVar4 = FUN_140e4a740(puVar10);
  if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
    if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  iVar4 = FUN_140e63cb0(local_98,&local_res8,&local_res10,plVar9);
  if (0 < iVar4) {
    do {
      uVar15 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
      local_148 = 0x12;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      puVar6 = (ulonglong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd608);
      plVar9 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd6e8);
      if (puVar6 != local_1a8) {
        local_128 = (undefined4)*puVar6;
        uStack_124 = *(undefined4 *)((longlong)puVar6 + 4);
        uStack_120 = (undefined4)puVar6[1];
        uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)local_1a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1a8);
        }
        FUN_140041b80(local_1a8,&local_128);
      }
      local_108 = local_1a8;
      if ((int)local_a8[0] < 1) {
        puVar10 = &DAT_1419df7b0;
      }
      else {
        puVar10 = (undefined8 *)*local_a0;
      }
      iVar4 = FUN_140e4a740(puVar10);
      if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
        if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar11 = plVar9;
      }
      if (plVar11 != local_198) {
        local_128 = (undefined4)*plVar11;
        uStack_124 = *(undefined4 *)((longlong)plVar11 + 4);
        uStack_120 = (undefined4)plVar11[1];
        uStack_11c = *(undefined4 *)((longlong)plVar11 + 0xc);
        if ((1 << ((byte)local_198[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_198);
        }
        FUN_140041b80(local_198,&local_128);
      }
      local_100 = local_198;
      ppuVar14 = (ulonglong **)CONCAT44(uVar15,DAT_1419fee38);
      uVar8 = FUN_140e634e0(local_res8,local_res10,&local_1d8,2,ppuVar14,&local_108);
      local_134 = 0;
      local_140 = 0;
      iVar4 = FUN_140e851f0(uVar8,&local_140,DAT_141955260,1);
      if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_140);
      }
      uVar15 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
      if (iVar4 != -2 && iVar4 < 0) {
        local_148 = 0x14;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        local_1b8 = 0;
        local_1b0 = 0;
        local_1ac = 5;
        puVar6 = (ulonglong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd608);
        plVar9 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd6e8);
        if (puVar6 != local_188) {
          local_128 = (undefined4)*puVar6;
          uStack_124 = *(undefined4 *)((longlong)puVar6 + 4);
          uStack_120 = (undefined4)puVar6[1];
          uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << ((byte)local_188[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_188);
          }
          FUN_140041b80(local_188,&local_128);
        }
        local_f8 = local_188;
        if ((int)local_a8[0] < 1) {
          puVar10 = &DAT_1419df7b0;
        }
        else {
          puVar10 = (undefined8 *)*local_a0;
        }
        iVar4 = FUN_140e4a740(puVar10);
        if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0))
        {
          if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                          *(undefined4 *)(lVar1 + 0x24));
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
          plVar11 = plVar9;
        }
        if (plVar11 != local_178) {
          local_128 = (undefined4)*plVar11;
          uStack_124 = *(undefined4 *)((longlong)plVar11 + 4);
          uStack_120 = (undefined4)plVar11[1];
          uStack_11c = *(undefined4 *)((longlong)plVar11 + 0xc);
          if ((1 << ((byte)local_178[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_178);
          }
          FUN_140041b80(local_178,&local_128);
        }
        local_f0 = local_178;
        ppuVar14 = (ulonglong **)CONCAT44(uVar15,DAT_1419fe568);
        FUN_140e634e0(local_res8,local_res10,&local_1b8,2,ppuVar14,&local_f8);
      }
      local_148 = 0x17;
      if ((int)local_a8[0] < 1) {
        puVar10 = &DAT_1419df7b0;
      }
      else {
        puVar10 = (undefined8 *)*local_a0;
      }
      iVar4 = FUN_140e4a740(puVar10);
      if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
        if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar9 = (longlong *)0x0;
        }
        else {
          plVar9 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      iVar4 = FUN_140e63cb0(local_78,&local_res8,&local_res10,plVar9);
      if (0 < iVar4) {
        do {
          (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd6e8);
          local_148 = 0x19;
          (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd6e8);
          puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fde28);
          uStack_bc = 0xd;
          local_c8 = 0;
          if (&local_c8 != puVar10) {
            local_128 = 0;
            uStack_124 = 0;
            uStack_120 = uStack_c0;
            uStack_11c = 0xd;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar10);
            }
            FUN_140041b80(puVar10,&local_128);
          }
          local_148 = 0x1a;
          puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd828);
          uStack_ac = 0xd;
          local_b8 = 0;
          if (&local_b8 != puVar10) {
            local_128 = 0;
            uStack_124 = 0;
            uStack_120 = uStack_b0;
            uStack_11c = 0xd;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar10);
            }
            FUN_140041b80(puVar10,&local_128);
          }
          local_148 = 0x1b;
          puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd488);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar10);
          }
          *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
          *puVar10 = 0;
          local_148 = 0x1c;
          puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd6f8);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar10);
          }
          *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
          *puVar10 = 0;
          local_148 = 0x1d;
          puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd758);
          FUN_140e85f80(local_res8,DAT_1419fd4e8,0x80000000,&local_e0);
          FUN_140e609c0(local_res8);
          uVar13 = local_e0;
          if ((local_d4 & 0xffffff) != 0) {
            uVar13 = FUN_140e4b060(&local_e0);
          }
          uStack_1bc = 0;
          local_1c8 = uVar13 ^ 0x8000000000000000;
          if (&local_1c8 != puVar10) {
            local_1c8._4_4_ = (undefined4)(local_1c8 >> 0x20);
            uStack_124 = local_1c8._4_4_;
            uStack_120 = uStack_1c0;
            uStack_11c = 0;
            local_128 = (int)uVar13;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar10);
            }
            FUN_140041b80(puVar10,&local_128);
          }
          FUN_140e60910(1);
          cVar3 = FUN_140e643f0(local_78,&local_res8,&local_res10);
        } while (cVar3 != '\0');
      }
      FUN_140e63970(local_78,&local_res8,&local_res10);
      if (local_68 != 0) {
        FUN_140e4cd60();
      }
      cVar3 = FUN_140e643f0(local_98,&local_res8,&local_res10);
    } while (cVar3 != '\0');
  }
  FUN_140e63970(local_98,&local_res8,&local_res10);
  if (local_88 != 0) {
    FUN_140e4cd60();
    local_88 = 0;
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  _eh_vector_destructor_iterator_(local_1a8,0x10,5,FUN_140041b30);
  if (0 < (int)local_a8[0]) {
    puVar10 = local_a0;
    do {
      puVar2 = (undefined8 *)*puVar10;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar10 = puVar10 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  FUN_140e4cd60(local_a0);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}

