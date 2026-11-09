// gml_Script_InputPlayerSetMetadata @ 0x140350db0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputPlayerSetMetadata
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined4 local_res20;
  undefined4 uVar12;
  undefined8 uVar11;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178 [2];
  undefined8 local_168 [2];
  undefined1 local_158 [12];
  byte local_14c;
  undefined8 local_148;
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined1 *local_e0;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  uint local_90 [2];
  undefined8 *local_88;
  undefined1 local_80 [16];
  longlong local_70;
  
  local_res20 = 0;
  local_100 = "gml_Script_InputPlayerSetMaxThreshold";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 7;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_140041df0(local_90,param_4,3,param_5);
  uVar12 = 1;
  _eh_vector_constructor_iterator_(local_178,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_18c = 0;
  local_198 = 0;
  local_c8 = 0;
  local_94 = 0;
  local_a0 = 0;
  local_b4 = 0;
  local_c0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde598) &&
     (_Init_thread_header(&DAT_141dde598), DAT_141dde598 == -1)) {
    DAT_141dde590 = (longlong *)FUN_140e63aa0(DAT_1419f2d38);
    _Init_thread_footer(&DAT_141dde598);
  }
  local_f8 = 7;
  uVar10 = (ulonglong)local_90[0];
  if ((int)local_90[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_88[2];
  }
  iVar3 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_f8 = 7;
    if ((int)local_90[0] < 3) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_88[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
  }
  if (DAT_141ddc11b == '\0') {
    FUN_140e64380(DAT_141dde590,"gml_Script_InputPlayerSetMaxThreshold");
    FUN_140e64380(local_res8,"gml_Script_InputPlayerSetMaxThreshold");
  }
  local_f8 = 9;
  if (DAT_141ddc11b == '\0') {
    DAT_141ddc11b = '\x01';
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    puVar5 = (undefined8 *)(**(code **)(*DAT_141dde590 + 0x10))(DAT_141dde590,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde590);
    uVar12 = 0;
    puVar6 = (undefined8 *)gml_Script___InputTrace(local_res8,local_res10,&local_198,0,0);
    if (puVar6 != puVar5) {
      local_188 = *puVar6;
      uStack_180 = *(undefined4 *)(puVar6 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_188);
    }
    FUN_140e60910(1);
  }
  local_f8 = 6;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  if ((int)local_90[0] < 3) {
    puVar5 = &DAT_1419df7b0;
LAB_140351082:
    local_188 = *puVar5;
    uStack_180 = *(undefined4 *)(puVar5 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_178[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_188);
  }
  else {
    puVar5 = (undefined8 *)local_88[2];
    if (puVar5 != local_178) goto LAB_140351082;
  }
  local_f0 = local_178;
  uVar11 = CONCAT44(uVar12,DAT_141a014a8);
  uVar7 = FUN_140e634e0(local_res8,local_res10,&local_198,1,uVar11,&local_f0);
  uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 == '\0') {
    local_f8 = 7;
    local_a0 = 0;
    local_98 = 0;
    local_94 = 5;
    if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    local_c0 = 0;
    local_b8 = 0;
    local_b4 = 5;
    if ((int)local_90[0] < 3) {
      puVar5 = &DAT_1419df7b0;
LAB_140351155:
      local_188 = *puVar5;
      uStack_180 = *(undefined4 *)(puVar5 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_168[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_168);
      }
      FUN_140041b80(local_168,&local_188);
    }
    else {
      puVar5 = (undefined8 *)local_88[2];
      if (puVar5 != local_168) goto LAB_140351155;
    }
    local_e8 = local_168;
    local_188 = CONCAT44(uRam0000000141dd0fdc,_DAT_141dd0fd8);
    uStack_180 = uRam0000000141dd0fe0;
    uStack_17c = DAT_141dd0fe4;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_188);
    local_e0 = local_158;
    puVar5 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_c0,1,CONCAT44(uVar12,DAT_1419fdc58),
                           &local_e8);
    if (puVar5 != &local_148) {
      local_188 = *puVar5;
      uStack_180 = *(undefined4 *)(puVar5 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_188);
    }
    local_d8 = &local_148;
    local_188 = CONCAT44(uRam0000000141dd0fcc,_DAT_141dd0fc8);
    uStack_180 = uRam0000000141dd0fd0;
    uStack_17c = DAT_141dd0fd4;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_188);
    local_d0 = local_138;
    FUN_14008e020(local_res8,local_res10,&local_a0,3,&local_e0);
    local_c8 = local_94;
  }
  local_f8 = 0x10;
  if ((int)local_90[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_88[2];
  }
  uStack_10c = 0;
  local_118 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar5,&local_118,DAT_141955260,1);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if (uVar4 < 0x80000000) {
    local_f8 = 0x12;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_188 = CONCAT44(uRam0000000141dd100c,_DAT_141dd1008);
    uStack_180 = uRam0000000141dd1010;
    uStack_17c = DAT_141dd1014;
    if ((1 << ((byte)local_178[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_188);
    local_f0 = local_178;
    if ((int)local_90[0] < 3) {
      puVar5 = &DAT_1419df7b0;
LAB_1403513a2:
      local_188 = *puVar5;
      uStack_180 = *(undefined4 *)(puVar5 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_168[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_168);
      }
      FUN_140041b80(local_168,&local_188);
    }
    else {
      puVar5 = (undefined8 *)local_88[2];
      if (puVar5 != local_168) goto LAB_1403513a2;
    }
    local_e8 = local_168;
    local_188 = CONCAT44(uRam0000000141dd101c,_DAT_141dd1018);
    uStack_180 = uRam0000000141dd1020;
    uStack_17c = DAT_141dd1024;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_188);
    local_e0 = local_158;
    local_188 = CONCAT44(uRam00000001419e42c4,_DAT_1419e42c0);
    uStack_180 = uRam00000001419e42c8;
    uStack_17c = uRam00000001419e42cc;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_188);
    local_d8 = &local_148;
    local_188 = CONCAT44(uRam0000000141dd0fec,_DAT_141dd0fe8);
    uStack_180 = uRam0000000141dd0ff0;
    uStack_17c = DAT_141dd0ff4;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_188);
    local_d0 = local_138;
    FUN_14008e020(local_res8,local_res10,&local_198,5,&local_f0);
  }
  local_f8 = 0x18;
  if ((int)local_90[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_88[2];
  }
  uStack_10c = 0;
  local_118 = 0;
  iVar3 = FUN_140e851f0(puVar5,&local_118,DAT_141955260,1);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if (iVar3 == -2 || -1 < iVar3) goto LAB_140351650;
  local_f8 = 0x1a;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  local_188 = CONCAT44(uRam0000000141dd100c,_DAT_141dd1008);
  uStack_180 = uRam0000000141dd1010;
  uStack_17c = DAT_141dd1014;
  if ((1 << ((byte)local_178[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_188);
  local_f0 = local_178;
  if ((int)local_90[0] < 3) {
    puVar5 = &DAT_1419df7b0;
LAB_1403515ad:
    local_188 = *puVar5;
    uStack_180 = *(undefined4 *)(puVar5 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_168[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_188);
  }
  else {
    puVar5 = (undefined8 *)local_88[2];
    if (puVar5 != local_168) goto LAB_1403515ad;
  }
  local_e8 = local_168;
  local_188 = CONCAT44(uRam0000000141dd0ffc,_DAT_141dd0ff8);
  uStack_180 = uRam0000000141dd1000;
  uStack_17c = DAT_141dd1004;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_188);
  local_e0 = local_158;
  FUN_14008e020(local_res8,local_res10,&local_198,3,&local_f0);
LAB_140351650:
  local_f8 = 0xd;
  plVar8 = (longlong *)(**(code **)(*DAT_141dde590 + 8))(DAT_141dde590,DAT_141a026b8);
  if ((int)local_90[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_88[2];
  }
  iVar3 = FUN_140e4a740(puVar5);
  if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  iVar3 = FUN_140e63cb0(local_80,&local_res8,&local_res10,plVar8);
  if (0 < iVar3) {
    do {
      local_f8 = 0xf;
      if ((int)local_90[0] < 1) {
        puVar5 = &DAT_1419df7b0;
      }
      else {
        puVar5 = (undefined8 *)*local_88;
      }
      uStack_17c = 10;
      local_188 = 2;
      iVar3 = FUN_140e851f0(puVar5,&local_188,DAT_141955260,0);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      uVar4 = 1 << ((byte)local_18c & 0x1f);
      if (iVar3 == 0) {
        local_f8 = 0x11;
        if ((uVar4 & 0x46) != 0) {
          FUN_140041a50(&local_198);
        }
        local_198 = 0;
        local_190 = 0;
        local_18c = 5;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd478);
        local_128 = _DAT_1419e42d0;
        uStack_124 = uRam00000001419e42d4;
        uStack_120 = uRam00000001419e42d8;
        uStack_11c = uRam00000001419e42dc;
        if ((1 << ((byte)local_178[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_178);
        }
        FUN_140041b80(local_178,&local_128);
        local_f0 = local_178;
        if ((int)local_90[0] < 2) {
          puVar5 = &DAT_1419df7b0;
LAB_14035180e:
          local_128 = *(undefined4 *)puVar5;
          uStack_124 = *(undefined4 *)((longlong)puVar5 + 4);
          uStack_120 = *(undefined4 *)(puVar5 + 1);
          uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)local_168[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_168);
          }
          FUN_140041b80(local_168,&local_128);
        }
        else {
          puVar5 = (undefined8 *)local_88[1];
          if (puVar5 != local_168) goto LAB_14035180e;
        }
        local_e8 = local_168;
        FUN_140e63610(local_res8,local_res10,&local_198,2,uVar7,&local_f0);
        local_f8 = 0x12;
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        local_198 = 0;
        local_190 = 0;
        local_18c = 5;
        local_128 = _DAT_1419e42e0;
        uStack_124 = uRam00000001419e42e4;
        uStack_120 = uRam00000001419e42e8;
        uStack_11c = uRam00000001419e42ec;
        if ((1 << ((byte)local_178[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_178);
        }
        FUN_140041b80(local_178,&local_128);
        local_f0 = local_178;
        if ((int)local_90[0] < 2) {
          puVar5 = &DAT_1419df7b0;
LAB_1403518ff:
          local_128 = *(undefined4 *)puVar5;
          uStack_124 = *(undefined4 *)((longlong)puVar5 + 4);
          uStack_120 = *(undefined4 *)(puVar5 + 1);
          uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)local_168[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_168);
          }
          FUN_140041b80(local_168,&local_128);
        }
        else {
          puVar5 = (undefined8 *)local_88[1];
          if (puVar5 != local_168) goto LAB_1403518ff;
        }
        local_e8 = local_168;
        FUN_140e63610(local_res8,local_res10,&local_198,2,uVar7,&local_f0);
        local_f8 = 0x13;
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        local_198 = 0;
        local_190 = 0;
        local_18c = 5;
        local_128 = _DAT_1419e42f0;
        uStack_124 = uRam00000001419e42f4;
        uStack_120 = uRam00000001419e42f8;
        uStack_11c = uRam00000001419e42fc;
        if ((1 << ((byte)local_178[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_178);
        }
        FUN_140041b80(local_178,&local_128);
        local_f0 = local_178;
        if ((int)local_90[0] < 2) {
          puVar5 = &DAT_1419df7b0;
LAB_1403519f0:
          local_128 = *(undefined4 *)puVar5;
          uStack_124 = *(undefined4 *)((longlong)puVar5 + 4);
          uStack_120 = *(undefined4 *)(puVar5 + 1);
          uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)local_168[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_168);
          }
          FUN_140041b80(local_168,&local_128);
        }
        else {
          puVar5 = (undefined8 *)local_88[1];
          if (puVar5 != local_168) goto LAB_1403519f0;
        }
      }
      else {
        local_f8 = 0x17;
        if ((uVar4 & 0x46) != 0) {
          FUN_140041a50(&local_198);
        }
        local_198 = 0;
        local_190 = 0;
        local_18c = 5;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd478);
        if ((int)local_90[0] < 1) {
          puVar5 = &DAT_1419df7b0;
LAB_140351a90:
          local_128 = *(undefined4 *)puVar5;
          uStack_124 = *(undefined4 *)((longlong)puVar5 + 4);
          uStack_120 = *(undefined4 *)(puVar5 + 1);
          uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)local_178[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_178);
          }
          FUN_140041b80(local_178,&local_128);
        }
        else {
          puVar5 = (undefined8 *)*local_88;
          if (puVar5 != local_178) goto LAB_140351a90;
        }
        local_f0 = local_178;
        if ((int)local_90[0] < 2) {
          puVar5 = &DAT_1419df7b0;
LAB_140351ae3:
          local_128 = *(undefined4 *)puVar5;
          uStack_124 = *(undefined4 *)((longlong)puVar5 + 4);
          uStack_120 = *(undefined4 *)(puVar5 + 1);
          uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)local_168[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_168);
          }
          FUN_140041b80(local_168,&local_128);
        }
        else {
          puVar5 = (undefined8 *)local_88[1];
          if (puVar5 != local_168) goto LAB_140351ae3;
        }
        local_e8 = local_168;
        FUN_140e63610(local_res8,local_res10,&local_198,2,uVar7,&local_f0);
        local_f8 = 0x18;
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        local_198 = 0;
        local_190 = 0;
        local_18c = 5;
        plVar8 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd688);
        plVar9 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd688);
        local_128 = _DAT_1419e42f0;
        uStack_124 = uRam00000001419e42f4;
        uStack_120 = uRam00000001419e42f8;
        uStack_11c = uRam00000001419e42fc;
        if ((1 << ((byte)local_178[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_178);
        }
        FUN_140041b80(local_178,&local_128);
        local_f0 = local_178;
        if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0))
        {
          if (*(int *)(lVar1 + 0x24) < 2) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
            plVar9 = (longlong *)0x0;
          }
          else {
            plVar9 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x10);
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0))
        {
          if (*(int *)(lVar1 + 0x24) < 1) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
            plVar8 = (longlong *)0x0;
          }
          else {
            plVar8 = *(longlong **)(lVar1 + 8);
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        local_a4 = *(undefined4 *)((longlong)plVar8 + 0xc);
        local_a8 = (undefined4)plVar8[1];
        if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) == 0) {
          local_b0 = *plVar8;
        }
        else {
          FUN_1400419b0(&local_b0,plVar8);
        }
        local_res20 = 1;
        FUN_1400460e0(&local_b0,plVar9);
        uStack_10c = 0;
        local_118 = 0x3fe0000000000000;
        local_res20 = 3;
        FUN_140042560(&local_118,&local_b0);
        local_128 = (undefined4)local_118;
        uStack_124 = local_118._4_4_;
        uStack_120 = uStack_110;
        uStack_11c = uStack_10c;
        if ((1 << ((byte)local_168[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_168);
        }
        FUN_140041b80(local_168,&local_128);
        local_res20 = 1;
        if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        local_res20 = 0;
        if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b0);
        }
      }
      local_e8 = local_168;
      FUN_140e63610(local_res8,local_res10,&local_198,2,uVar7,&local_f0);
      cVar2 = FUN_140e643f0(local_80,&local_res8,&local_res10);
    } while (cVar2 != '\0');
    param_3 = local_res18;
  }
  FUN_140e63970(local_80,&local_res8,&local_res10);
  if (local_70 != 0) {
    FUN_140e4cd60();
    local_70 = 0;
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_c8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  _eh_vector_destructor_iterator_(local_178,0x10,5,FUN_140041b30);
  if (0 < (int)local_90[0]) {
    puVar5 = local_88;
    do {
      puVar6 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_140e4cd60(local_88);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

