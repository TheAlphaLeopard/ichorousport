// gml_Script_anon_202_anon_179_gml_Object_oAtkBox_Create_0 @ 0x140680ca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_202_anon_179_gml_Object_oAtkBox_Create_0(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  code *pcVar12;
  undefined1 **ppuVar13;
  ulonglong in_stack_fffffffffffffdb0;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_44;
  
  uVar10 = 0;
  local_b0 = "gml_Object_oAnimatedText_Draw_64";
  local_a8 = 0;
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  pcVar12 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_188,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_18c = 0xffffff;
  local_198 = 0;
  local_44 = 0xffffff;
  local_50 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_a8 = 4;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01bc8);
  local_fc = *(undefined4 *)((longlong)puVar4 + 0xc);
  local_100 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
    local_108 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_108,puVar4);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de1040) &&
     (_Init_thread_header(&DAT_141de1040), DAT_141de1040 == -1)) {
    _DAT_141de0ffc = 0;
    _DAT_141de0ff0 = 0;
    _DAT_141de1010 = 0;
    _DAT_141de1004 = 0x3ff0000000000000;
    _DAT_141de1014 = 1;
    _DAT_141de1024 = 0;
    _DAT_141de1018 = 0x4000000000000000;
    _DAT_141de1028 = 2;
    _DAT_141de1038 = 0;
    _DAT_141de102c = 0x4008000000000000;
    _DAT_141de103c = 3;
    atexit((_func_5014 *)&LAB_1414859e0);
    _Init_thread_footer(&DAT_141de1040);
  }
  uVar11 = 0;
LAB_140680f20:
  iVar2 = FUN_140e851f0(&DAT_141de0ff0 + (longlong)(int)uVar11 * 0x14,&local_108,DAT_141955260,0);
  uVar3 = (undefined4)((ulonglong)pcVar12 >> 0x20);
  if (iVar2 != 0) goto code_r0x000140680f4a;
  iVar2 = *(int *)(&DAT_141de1000 + (longlong)(int)uVar11 * 0x14);
  if (iVar2 != 0) {
    bVar1 = (byte)local_22c;
    if (iVar2 == 1) {
      local_a8 = 0xc;
      if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      local_238 = 0;
      local_230 = 0;
      local_22c = 5;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1f8 = 0;
      local_1f0 = 0;
      local_1ec = 5;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_208 = 0;
      local_200 = 0;
      local_1fc = 5;
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_218 = 0;
      local_210 = 0;
      local_20c = 5;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdad8);
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01df8);
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57100);
      local_248 = CONCAT44(uRam0000000141dd513c,_DAT_141dd5138);
      uStack_240 = uRam0000000141dd5140;
      uStack_23c = DAT_141dd5144;
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      FUN_140041b80(local_188,&local_248);
      local_f8 = local_188;
      local_248 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_240 = DAT_1419df7b8;
      uStack_23c = DAT_1419df7bc;
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      FUN_140041b80(local_178,&local_248);
      ppuVar13 = &local_f8;
      local_f0 = local_178;
      puVar7 = (undefined8 *)gml_Script_seg_add(param_1,param_2,&local_238,2,ppuVar13);
      if (puVar7 != &local_198) {
        local_248 = *puVar7;
        uStack_240 = *(undefined4 *)(puVar7 + 1);
        uStack_23c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        FUN_140041b80(&local_198,&local_248);
      }
      FUN_140e87440(&local_198,DAT_141a055b8,0x80000000,&local_50,
                    (ulonglong)ppuVar13 & 0xffffffffffffff00,
                    in_stack_fffffffffffffdb0 & 0xffffffffffffff00);
      local_248 = CONCAT44(uRam00000001419e7354,_DAT_1419e7350);
      uStack_240 = uRam00000001419e7358;
      uStack_23c = uRam00000001419e735c;
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_168);
      }
      FUN_140041b80(local_168,&local_248);
      local_e8 = local_168;
      local_248 = CONCAT44(uRam00000001419e7354,_DAT_1419e7350);
      uStack_240 = uRam00000001419e7358;
      uStack_23c = uRam00000001419e735c;
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_248);
      local_e0 = local_158;
      switch(local_18c) {
      default:
switchD_14068191c_caseD_1:
        uVar8 = 0;
        break;
      case 6:
        uVar8 = local_198;
        break;
      case 0xf:
        iVar2 = (int)((ulonglong)local_198 >> 0x20);
        if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_14068191c_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        uVar3 = FUN_140e4a8b0(&local_198);
        uVar8 = FUN_140e87250(uVar3);
      }
      ppuVar13 = &local_e8;
      puVar7 = &local_50;
      puVar9 = (undefined8 *)FUN_140e63610(uVar8,param_2,&local_1f8,2,puVar7,ppuVar13);
      if (puVar9 != &local_1a8) {
        local_248 = *puVar9;
        uStack_240 = *(undefined4 *)(puVar9 + 1);
        uStack_23c = *(undefined4 *)((longlong)puVar9 + 0xc);
        if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        FUN_140041b80(&local_1a8,&local_248);
      }
      FUN_140e87440(&local_1a8,DAT_141a05568,0x80000000,&local_60,
                    (ulonglong)puVar7 & 0xffffffffffffff00,(ulonglong)ppuVar13 & 0xffffffffffffff00)
      ;
      uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
      uStack_220 = *(undefined4 *)(puVar5 + 1);
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
        local_228 = *puVar5;
      }
      else {
        FUN_1400419b0(&local_228,puVar5);
      }
      uStack_23c = 0;
      local_248 = 0x4000000000000000;
      FUN_140046500(&local_228,&local_248);
      if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_248 = local_228;
      uStack_240 = uStack_220;
      uStack_23c = uStack_21c;
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_148);
      }
      FUN_140041b80(local_148,&local_248);
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      local_d8 = local_148;
      switch(local_19c) {
      default:
switchD_140681ab6_caseD_1:
        uVar8 = 0;
        break;
      case 6:
        uVar8 = local_1a8;
        break;
      case 0xf:
        iVar2 = (int)((ulonglong)local_1a8 >> 0x20);
        if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140681ab6_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        uVar3 = FUN_140e4a8b0(&local_1a8);
        uVar8 = FUN_140e87250(uVar3);
      }
      ppuVar13 = &local_d8;
      puVar5 = &local_60;
      puVar7 = (undefined8 *)FUN_140e63610(uVar8,param_2,&local_208,1,puVar5,ppuVar13);
      if (puVar7 != &local_1b8) {
        local_248 = *puVar7;
        uStack_240 = *(undefined4 *)(puVar7 + 1);
        uStack_23c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_248);
      }
      FUN_140e87440(&local_1b8,DAT_141a05028,0x80000000,&local_70,
                    (ulonglong)puVar5 & 0xffffffffffffff00,(ulonglong)ppuVar13 & 0xffffffffffffff00)
      ;
      local_248 = CONCAT44(uRam00000001419e7364,_DAT_1419e7360);
      uStack_240 = uRam00000001419e7368;
      uStack_23c = uRam00000001419e736c;
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_248);
      local_d0 = local_138;
      local_248 = CONCAT44(uRam00000001419e7334,_DAT_1419e7330);
      uStack_240 = uRam00000001419e7338;
      uStack_23c = uRam00000001419e733c;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_248);
      local_c8 = local_128;
      if (puVar6 != &local_118) {
        local_248 = *puVar6;
        uStack_240 = *(undefined4 *)(puVar6 + 1);
        uStack_23c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_248);
      }
      local_c0 = &local_118;
      FUN_140e609c0(param_1);
      switch(local_1ac) {
      case 0:
      case 7:
      case 10:
      case 0xd:
switchD_140681c44_caseD_0:
        uVar3 = FUN_140e4a8b0(&local_1b8);
        uVar10 = FUN_140e87250(uVar3);
        break;
      case 6:
        uVar10 = local_1b8;
        break;
      case 0xf:
        iVar2 = (int)((ulonglong)local_1b8 >> 0x20);
        if ((iVar2 == 0x1000000) || (iVar2 == 0x4000001)) goto switchD_140681c44_caseD_0;
      }
      puVar5 = &local_70;
      goto LAB_140681c88;
    }
    if (iVar2 == 2) {
      local_a8 = 0x15;
      if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      local_238 = 0;
      local_230 = 0;
      local_22c = 5;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1f8 = 0;
      local_1f0 = 0;
      local_1ec = 5;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_208 = 0;
      local_200 = 0;
      local_1fc = 5;
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_218 = 0;
      local_210 = 0;
      local_20c = 5;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdad8);
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01df8);
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57100);
      local_248 = CONCAT44(uRam0000000141dd512c,_DAT_141dd5128);
      uStack_240 = uRam0000000141dd5130;
      uStack_23c = DAT_141dd5134;
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      FUN_140041b80(local_188,&local_248);
      local_f8 = local_188;
      local_248 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_240 = DAT_1419df7b8;
      uStack_23c = DAT_1419df7bc;
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      FUN_140041b80(local_178,&local_248);
      ppuVar13 = &local_f8;
      local_f0 = local_178;
      puVar7 = (undefined8 *)gml_Script_seg_add(param_1,param_2,&local_238,2,ppuVar13);
      if (puVar7 != &local_1c8) {
        local_248 = *puVar7;
        uStack_240 = *(undefined4 *)(puVar7 + 1);
        uStack_23c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        FUN_140041b80(&local_1c8,&local_248);
      }
      FUN_140e87440(&local_1c8,DAT_141a055b8,0x80000000,&local_80,
                    (ulonglong)ppuVar13 & 0xffffffffffffff00,
                    in_stack_fffffffffffffdb0 & 0xffffffffffffff00);
      local_248 = CONCAT44(uRam00000001419e7354,_DAT_1419e7350);
      uStack_240 = uRam00000001419e7358;
      uStack_23c = uRam00000001419e735c;
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_168);
      }
      FUN_140041b80(local_168,&local_248);
      local_e8 = local_168;
      local_248 = CONCAT44(uRam00000001419e7354,_DAT_1419e7350);
      uStack_240 = uRam00000001419e7358;
      uStack_23c = uRam00000001419e735c;
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_248);
      local_e0 = local_158;
      switch(local_1bc) {
      default:
switchD_140681325_caseD_1:
        uVar8 = 0;
        break;
      case 6:
        uVar8 = local_1c8;
        break;
      case 0xf:
        iVar2 = (int)((ulonglong)local_1c8 >> 0x20);
        if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140681325_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        uVar3 = FUN_140e4a8b0(&local_1c8);
        uVar8 = FUN_140e87250(uVar3);
      }
      ppuVar13 = &local_e8;
      puVar7 = &local_80;
      puVar9 = (undefined8 *)FUN_140e63610(uVar8,param_2,&local_1f8,2,puVar7,ppuVar13);
      if (puVar9 != &local_1d8) {
        local_248 = *puVar9;
        uStack_240 = *(undefined4 *)(puVar9 + 1);
        uStack_23c = *(undefined4 *)((longlong)puVar9 + 0xc);
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        FUN_140041b80(&local_1d8,&local_248);
      }
      FUN_140e87440(&local_1d8,DAT_141a05568,0x80000000,&local_90,
                    (ulonglong)puVar7 & 0xffffffffffffff00,(ulonglong)ppuVar13 & 0xffffffffffffff00)
      ;
      uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
      uStack_220 = *(undefined4 *)(puVar5 + 1);
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
        local_228 = *puVar5;
      }
      else {
        FUN_1400419b0(&local_228,puVar5);
      }
      uStack_23c = 0;
      local_248 = 0x4000000000000000;
      FUN_140046500(&local_228,&local_248);
      if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_248 = local_228;
      uStack_240 = uStack_220;
      uStack_23c = uStack_21c;
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_148);
      }
      FUN_140041b80(local_148,&local_248);
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      local_d8 = local_148;
      switch(local_1cc) {
      default:
switchD_1406814bf_caseD_1:
        uVar8 = 0;
        break;
      case 6:
        uVar8 = local_1d8;
        break;
      case 0xf:
        iVar2 = (int)((ulonglong)local_1d8 >> 0x20);
        if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_1406814bf_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        uVar3 = FUN_140e4a8b0(&local_1d8);
        uVar8 = FUN_140e87250(uVar3);
      }
      ppuVar13 = &local_d8;
      puVar5 = &local_90;
      puVar7 = (undefined8 *)FUN_140e63610(uVar8,param_2,&local_208,1,puVar5,ppuVar13);
      if (puVar7 != &local_1e8) {
        local_248 = *puVar7;
        uStack_240 = *(undefined4 *)(puVar7 + 1);
        uStack_23c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_248);
      }
      FUN_140e87440(&local_1e8,DAT_141a05028,0x80000000,&local_a0,
                    (ulonglong)puVar5 & 0xffffffffffffff00,(ulonglong)ppuVar13 & 0xffffffffffffff00)
      ;
      local_248 = CONCAT44(uRam00000001419e7364,_DAT_1419e7360);
      uStack_240 = uRam00000001419e7368;
      uStack_23c = uRam00000001419e736c;
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_248);
      local_d0 = local_138;
      local_248 = CONCAT44(uRam00000001419e7334,_DAT_1419e7330);
      uStack_240 = uRam00000001419e7338;
      uStack_23c = uRam00000001419e733c;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_248);
      local_c8 = local_128;
      if (puVar6 != &local_118) {
        local_248 = *puVar6;
        uStack_240 = *(undefined4 *)(puVar6 + 1);
        uStack_23c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_248);
      }
      local_c0 = &local_118;
      FUN_140e609c0(param_1);
      switch(local_1dc) {
      case 0:
      case 7:
      case 10:
      case 0xd:
switchD_14068164d_caseD_0:
        uVar3 = FUN_140e4a8b0(&local_1e8);
        uVar10 = FUN_140e87250(uVar3);
        break;
      case 6:
        puVar5 = &local_a0;
        uVar10 = local_1e8;
        goto LAB_140681c88;
      case 0xf:
        iVar2 = (int)((ulonglong)local_1e8 >> 0x20);
        if ((iVar2 == 0x1000000) || (iVar2 == 0x4000001)) goto switchD_14068164d_caseD_0;
      }
      puVar5 = &local_a0;
LAB_140681c88:
      puVar5 = (undefined8 *)FUN_140e63610(uVar10,param_2,&local_218,3,puVar5,&local_d0);
      if (puVar5 != puVar4) {
        local_248 = *puVar5;
        uStack_240 = *(undefined4 *)(puVar5 + 1);
        uStack_23c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_248);
      }
      FUN_140e60910(1);
    }
    else if (iVar2 == 3) {
      local_a8 = 0x1e;
      if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      local_238 = 0;
      local_230 = 0;
      local_22c = 5;
      uStack_23c = 0xf;
      local_248 = 0x1000002000000a9;
      local_228 = 0x1000002000000a9;
      uStack_220 = uStack_240;
      uStack_21c = 0xf;
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      FUN_140041b80(local_188,&local_228);
      local_f8 = local_188;
      local_248 = CONCAT44(uRam0000000141dc67a4,_DAT_141dc67a0);
      uStack_240 = uRam0000000141dc67a8;
      uStack_23c = uRam0000000141dc67ac;
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      FUN_140041b80(local_178,&local_248);
      local_248 = CONCAT44(uRam00000001419e7344,_DAT_1419e7340);
      uStack_240 = uRam00000001419e7348;
      uStack_23c = uRam00000001419e734c;
      local_f0 = local_178;
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_168);
      }
      FUN_140041b80(local_168,&local_248);
      local_e8 = local_168;
      FUN_140e634e0(param_1,param_2,&local_238,3,CONCAT44(uVar3,DAT_1419f4a48),&local_f8);
    }
  }
  goto LAB_140681cdb;
code_r0x000140680f4a:
  uVar11 = uVar11 + 1;
  if (3 < uVar11) {
LAB_140681cdb:
    local_a8 = 0x26;
    uVar10 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
    FUN_140046040(uVar10);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_90);
    }
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_70);
    }
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_60);
    }
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_50);
    }
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    _eh_vector_destructor_iterator_(local_188,0x10,8,FUN_140041b30);
    DAT_141dc7a50 = (undefined8 *)local_b8;
    return;
  }
  goto LAB_140680f20;
}

