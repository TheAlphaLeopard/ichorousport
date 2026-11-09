// gml_Object_oTutorialCombat_Create_0 @ 0x140df49d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oTutorialCombat_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  code *pcVar10;
  undefined1 **ppuVar11;
  ulonglong uVar12;
  ulonglong in_stack_fffffffffffffe90;
  undefined1 **ppuVar13;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined4 local_4c;
  
  local_130 = "gml_Object_oTutorial_Step_0";
  local_128 = 0;
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  pcVar10 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_f8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef678);
  local_4c = 0xffffff;
  local_58 = (undefined1 *)0x0;
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c60);
  local_104 = 0xffffff;
  local_110 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_128 = 2;
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_128 = 4;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f8678);
    local_7c = *(undefined4 *)((longlong)puVar6 + 0xc);
    local_80 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) == 0) {
      local_88 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_88,puVar6);
    }
    if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de3850) &&
       (_Init_thread_header(&DAT_141de3850), DAT_141de3850 == -1)) {
      _DAT_141de386c = 0;
      _DAT_141de3860 = 0;
      _DAT_141de3880 = 0;
      _DAT_141de3874 = 0x3ff0000000000000;
      _DAT_141de3884 = 1;
      _DAT_141de3894 = 0;
      _DAT_141de3888 = 0x4000000000000000;
      _DAT_141de3898 = 2;
      _DAT_141de38a8 = 0;
      _DAT_141de389c = 0x4008000000000000;
      _DAT_141de38ac = 3;
      _DAT_141de38bc = 0;
      _DAT_141de38b0 = 0x4010000000000000;
      _DAT_141de38c0 = 4;
      _DAT_141de38d0 = 0;
      _DAT_141de38c4 = 0x4014000000000000;
      _DAT_141de38d4 = 5;
      atexit((_func_5014 *)&LAB_14149a0e0);
      _Init_thread_footer(&DAT_141de3850);
    }
    uVar9 = 0;
LAB_140df4c50:
    iVar2 = FUN_140e851f0(&DAT_141de3860 + (longlong)(int)uVar9 * 0x14,&local_88,DAT_141955260,0);
    if (iVar2 != 0) goto code_r0x000140df4c7a;
    switch(*(undefined4 *)(&DAT_141de3870 + (longlong)(int)uVar9 * 0x14)) {
    case 0:
      local_128 = 8;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_148 = 0;
      local_140 = 0;
      local_13c = 5;
      uStack_14c = 0xf;
      local_158 = 0x1000000000000ee;
      FUN_140e87440(&local_158,DAT_1419ff968,0x80000000,&local_58,
                    (ulonglong)pcVar10 & 0xffffffffffffff00,
                    in_stack_fffffffffffffe90 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      uStack_14c = 0xf;
      local_158 = 0x1000000000000ee;
      uVar4 = FUN_140069500(&local_158);
      ppuVar13 = (undefined1 **)0x0;
      ppuVar11 = &local_58;
      uVar4 = FUN_140e63610(uVar4,param_2,&local_148,0,ppuVar11,0);
      cVar1 = FUN_140e491e0(uVar4);
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if (cVar1 == '\0') {
        local_128 = 0xb;
        uStack_15c = 0xd;
        local_168 = 0;
        if (&local_168 != puVar5) {
          local_158 = 0;
          uStack_150 = uStack_160;
          uStack_14c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_158);
        }
      }
      else {
        local_128 = 9;
        uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a02b08);
        FUN_140046040(uVar4);
      }
      local_128 = 0xd;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02ae8);
      cVar1 = FUN_140e491e0(uVar4);
      if (cVar1 == '\0') {
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        uVar3 = (undefined4)((ulonglong)ppuVar11 >> 0x20);
        local_148 = 0;
        local_140 = 0;
        local_13c = 5;
        uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02b08);
        local_168 = CONCAT44(uRam0000000141dc7974,_DAT_141dc7970);
        uStack_160 = uRam0000000141dc7978;
        uStack_15c = uRam0000000141dc797c;
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_168);
        local_b8 = local_f8;
        ppuVar13 = &local_b8;
        ppuVar11 = (undefined1 **)CONCAT44(uVar3,DAT_141a0a0d8);
        uVar8 = FUN_140e634e0(param_1,param_2,&local_148,1,ppuVar11,ppuVar13);
        iVar2 = FUN_140e851f0(uVar7,uVar8,DAT_141955260,1);
        if ((iVar2 != -2) && (-1 < iVar2)) {
          local_128 = 0xf;
          if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_120);
          }
          local_120 = 0;
          local_118 = 0;
          local_114 = 5;
          local_168 = CONCAT44(uRam0000000141ddbc6c,_DAT_141ddbc68);
          uStack_160 = uRam0000000141ddbc70;
          uStack_15c = DAT_141ddbc74;
          if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_e8);
          }
          FUN_140041b80(local_e8,&local_168);
          local_b0 = local_e8;
          ppuVar11 = &local_b0;
          gml_Script_CreateBossUi(param_1,param_2,&local_120,1,ppuVar11);
          local_128 = 0x10;
          puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02ae8);
          uStack_15c = 0xd;
          local_168 = 0x3ff0000000000000;
          if (&local_168 != puVar6) {
            local_158 = 0x3ff0000000000000;
            uStack_150 = uStack_160;
            uStack_14c = 0xd;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar6);
            }
            FUN_140041b80(puVar6,&local_158);
          }
        }
      }
      local_128 = 0x13;
      cVar1 = FUN_140e491e0(uVar4);
      if (cVar1 != '\0') {
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        uVar3 = (undefined4)((ulonglong)ppuVar11 >> 0x20);
        local_148 = 0;
        local_140 = 0;
        local_13c = 5;
        (**(code **)(*param_1 + 8))(param_1,DAT_141a02ae8);
        uStack_15c = 0xf;
        local_168 = 0x10000000000007e;
        local_158 = 0x10000000000007e;
        uStack_150 = uStack_160;
        uStack_14c = 0xf;
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_158);
        local_b8 = local_f8;
        ppuVar13 = &local_b8;
        ppuVar11 = (undefined1 **)CONCAT44(uVar3,DAT_141a02ef8);
        uVar4 = FUN_140e634e0(param_1,param_2,&local_148,1,ppuVar11,ppuVar13);
        cVar1 = FUN_140e491e0(uVar4);
        if (cVar1 == '\0') {
          local_128 = 0x14;
          uStack_15c = 0xd;
          local_168 = 0x3ff0000000000000;
          if (&local_168 != puVar5) {
            local_158 = 0x3ff0000000000000;
            uStack_150 = uStack_160;
            uStack_14c = 0xd;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar5);
            }
            FUN_140041b80(puVar5,&local_158);
          }
        }
      }
      local_128 = 0x16;
      if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_110);
      }
      local_104 = 0;
      local_110 = 0x408f380000000000;
      uStack_14c = 0xf;
      local_158 = 0x100000000000022;
      FUN_140e87930(&local_158,DAT_141a1f090,0x80000000,&local_110);
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_128 = 0x18;
      uStack_14c = 0xf;
      local_158 = 0x100000000000022;
      FUN_140e87440(&local_158,DAT_141a04b88,0x80000000,&local_68,
                    (ulonglong)ppuVar11 & 0xffffffffffffff00,
                    (ulonglong)ppuVar13 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      uStack_14c = 0;
      local_158 = 0x4024000000000000;
      uVar9 = FUN_140e851f0(&local_68,&local_158,DAT_141955260,1);
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if (uVar9 < 0x80000000) {
        local_128 = 0x1a;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f8678);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x3ff0000000000000;
        local_128 = 0x1b;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02ae8);
        uStack_15c = 0xd;
        local_168 = 0;
        if (&local_168 != puVar5) {
          local_158 = 0;
          uStack_150 = uStack_160;
          uStack_14c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_158);
        }
      }
      local_128 = 0x1f;
      break;
    case 1:
      local_128 = 0x23;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02ae8);
      cVar1 = FUN_140e491e0(uVar4);
      if (cVar1 == '\0') {
        local_128 = 0x25;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_148 = 0;
        local_140 = 0;
        local_13c = 5;
        local_168 = CONCAT44(uRam0000000141ddbcac,_DAT_141ddbca8);
        uStack_160 = uRam0000000141ddbcb0;
        uStack_15c = DAT_141ddbcb4;
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_168);
        local_b8 = local_f8;
        pcVar10 = (code *)&local_b8;
        gml_Script_CreateBossUi(param_1,param_2,&local_148,1,pcVar10);
        local_128 = 0x26;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02ae8);
        uStack_15c = 0xd;
        local_168 = 0x3ff0000000000000;
        if (&local_168 != puVar5) {
          local_158 = 0x3ff0000000000000;
          uStack_150 = uStack_160;
          uStack_14c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_158);
        }
        local_128 = 0x27;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0;
      }
      local_128 = 0x2a;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_148 = 0;
      local_140 = 0;
      local_13c = 5;
      uStack_14c = 0xf;
      local_158 = 0x1000000000000ee;
      in_stack_fffffffffffffe90 = in_stack_fffffffffffffe90 & 0xffffffffffffff00;
      uVar12 = (ulonglong)pcVar10 & 0xffffffffffffff00;
      FUN_140e87440(&local_158,DAT_1419f5868,0x80000000,&local_98,uVar12,in_stack_fffffffffffffe90);
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140e87440(&local_98,DAT_1419f5848,0x80000000,&local_78,uVar12 & 0xffffffffffffff00,
                    in_stack_fffffffffffffe90 & 0xffffffffffffff00);
      local_168 = CONCAT44(uRam0000000141ddbc5c,_DAT_141ddbc58);
      uStack_160 = uRam0000000141ddbc60;
      uStack_15c = DAT_141ddbc64;
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_168);
      local_b8 = local_f8;
      switch(local_8c) {
      default:
switchD_140df552b_caseD_1:
        uVar4 = 0;
        break;
      case 6:
        uVar4 = local_98;
        break;
      case 0xf:
        iVar2 = (int)((ulonglong)local_98 >> 0x20);
        if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140df552b_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        uVar3 = FUN_140e4a8b0(&local_98);
        uVar4 = FUN_140e87250(uVar3);
      }
      puVar5 = &local_78;
      uVar4 = FUN_140e63610(uVar4,param_2,&local_148,1,puVar5,&local_b8);
      uVar3 = (undefined4)((ulonglong)puVar5 >> 0x20);
      cVar1 = FUN_140e491e0(uVar4);
      if (cVar1 == '\0') {
        if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_120);
        }
        local_120 = 0;
        local_118 = 0;
        local_114 = 5;
        uStack_15c = 0xf;
        local_168 = 0x10000000000007e;
        local_158 = 0x10000000000007e;
        uStack_150 = uStack_160;
        uStack_14c = 0xf;
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_158);
        local_b0 = local_e8;
        uVar7 = CONCAT44(uVar3,DAT_141a02ef8);
        uVar4 = FUN_140e634e0(param_1,param_2,&local_120,1,uVar7,&local_b0);
        uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
        cVar1 = FUN_140e491e0(uVar4);
        if (cVar1 != '\0') goto LAB_140df563d;
      }
      else {
LAB_140df563d:
        local_128 = 0x2b;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0;
      }
      local_128 = 0x2d;
      if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_110);
      }
      local_104 = 0;
      local_110 = 0x408f380000000000;
      uStack_14c = 0xf;
      local_158 = 0x100000000000022;
      FUN_140e87930(&local_158,DAT_141a1f090,0x80000000,&local_110);
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_128 = 0x2f;
      uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
      FUN_140046040(uVar4);
      local_128 = 0x30;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_148 = 0;
      local_140 = 0;
      local_13c = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
      local_168 = CONCAT44(uRam0000000141dc7974,_DAT_141dc7970);
      uStack_160 = uRam0000000141dc7978;
      uStack_15c = uRam0000000141dc797c;
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_168);
      local_b8 = local_f8;
      puVar5 = (undefined8 *)
               FUN_140e634e0(param_1,param_2,&local_148,1,CONCAT44(uVar3,DAT_141a0a0d8),&local_b8);
      uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
      uStack_150 = *(undefined4 *)(puVar5 + 1);
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
        local_158 = *puVar5;
      }
      else {
        FUN_1400419b0(&local_158,puVar5);
      }
      uStack_15c = 7;
      local_168 = CONCAT44(local_168._4_4_,0xf);
      FUN_140042560(&local_158,&local_168);
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      uVar9 = FUN_140e851f0(uVar4,&local_158,DAT_141955260,1);
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if (uVar9 < 0x80000000) {
        local_128 = 0x32;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0;
        local_128 = 0x33;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02ae8);
        uStack_15c = 0xd;
        local_168 = 0;
        if (&local_168 != puVar5) {
          local_158 = 0;
          uStack_150 = uStack_160;
          uStack_14c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_158);
        }
      }
      local_128 = 0x36;
      break;
    case 2:
      local_128 = 0x3a;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02ae8);
      uVar3 = (undefined4)((ulonglong)pcVar10 >> 0x20);
      cVar1 = FUN_140e491e0(uVar4);
      if (cVar1 == '\0') {
        local_128 = 0x3c;
        uStack_15c = 0xf;
        local_168 = 0x10000000000007e;
        local_158 = 0x10000000000007e;
        uStack_150 = uStack_160;
        uStack_14c = 0xf;
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_158);
        local_b8 = local_f8;
        FUN_140edd0e0(param_1,param_2,1,&local_b8);
        local_128 = 0x3d;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_148 = 0;
        local_140 = 0;
        local_13c = 5;
        local_168 = CONCAT44(uRam0000000141ddbc8c,_DAT_141ddbc88);
        uStack_160 = uRam0000000141ddbc90;
        uStack_15c = DAT_141ddbc94;
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_168);
        local_b8 = local_f8;
        ppuVar13 = &local_b8;
        gml_Script_CreateBossUi(param_1,param_2,&local_148,1,ppuVar13);
        uVar3 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
        local_128 = 0x3e;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02ae8);
        uStack_15c = 0xd;
        local_168 = 0x3ff0000000000000;
        if (&local_168 != puVar5) {
          local_158 = 0x3ff0000000000000;
          uStack_150 = uStack_160;
          uStack_14c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_158);
        }
      }
      local_128 = 0x41;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_148 = 0;
      local_140 = 0;
      local_13c = 5;
      uStack_15c = 0xf;
      local_168 = 0x10000000000007e;
      local_158 = 0x10000000000007e;
      uStack_150 = uStack_160;
      uStack_14c = 0xf;
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_158);
      local_b8 = local_f8;
      uVar4 = FUN_140e634e0(param_1,param_2,&local_148,1,CONCAT44(uVar3,DAT_141a02ef8),&local_b8);
      cVar1 = FUN_140e491e0(uVar4);
      if (cVar1 == '\0') {
        local_128 = 0x43;
        if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_110);
        }
        local_104 = 0;
        local_110 = 0x40c3878000000000;
        uStack_15c = 0xf;
        local_168 = 0x100000000000022;
        FUN_140e87930(&local_168,DAT_141a1f090,0x80000000,&local_110);
        if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        local_128 = 0x44;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f8678);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x4008000000000000;
        local_128 = 0x45;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02ae8);
        uStack_15c = 0xd;
        local_168 = 0;
        if (&local_168 != puVar5) {
          local_158 = 0;
          uStack_150 = uStack_160;
          uStack_14c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_158);
        }
      }
      local_128 = 0x4a;
      break;
    case 3:
      local_128 = 0x4e;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02ae8);
      uVar3 = (undefined4)((ulonglong)pcVar10 >> 0x20);
      cVar1 = FUN_140e491e0(uVar4);
      if (cVar1 == '\0') {
        local_128 = 0x50;
        uStack_15c = 0xf;
        local_168 = 0x10000000000007e;
        local_158 = 0x10000000000007e;
        uStack_150 = uStack_160;
        uStack_14c = 0xf;
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_158);
        local_b8 = local_f8;
        FUN_140edd0e0(param_1,param_2,1,&local_b8);
        local_128 = 0x51;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_148 = 0;
        local_140 = 0;
        local_13c = 5;
        local_168 = CONCAT44(uRam0000000141ddbc9c,_DAT_141ddbc98);
        uStack_160 = uRam0000000141ddbca0;
        uStack_15c = DAT_141ddbca4;
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_168);
        local_b8 = local_f8;
        ppuVar13 = &local_b8;
        gml_Script_CreateBossUi(param_1,param_2,&local_148,1,ppuVar13);
        uVar3 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
        local_128 = 0x52;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02ae8);
        uStack_15c = 0xd;
        local_168 = 0x3ff0000000000000;
        if (&local_168 != puVar5) {
          local_158 = 0x3ff0000000000000;
          uStack_150 = uStack_160;
          uStack_14c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_158);
        }
        local_128 = 0x53;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0;
      }
      local_128 = 0x57;
      uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
      FUN_140046040(uVar4);
      local_128 = 0x59;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_148 = 0;
      local_140 = 0;
      local_13c = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
      local_168 = CONCAT44(uRam0000000141dc7974,_DAT_141dc7970);
      uStack_160 = uRam0000000141dc7978;
      uStack_15c = uRam0000000141dc797c;
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_168);
      local_b8 = local_f8;
      puVar5 = (undefined8 *)
               FUN_140e634e0(param_1,param_2,&local_148,1,CONCAT44(uVar3,DAT_141a0a0d8),&local_b8);
      uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
      uStack_150 = *(undefined4 *)(puVar5 + 1);
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
        local_158 = *puVar5;
      }
      else {
        FUN_1400419b0(&local_158,puVar5);
      }
      uStack_15c = 7;
      local_168 = CONCAT44(local_168._4_4_,0x3c);
      FUN_140042560(&local_158,&local_168);
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      uVar9 = FUN_140e851f0(uVar4,&local_158,DAT_141955260,1);
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if (uVar9 < 0x80000000) {
        local_128 = 0x5b;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f8678);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0x4010000000000000;
      }
      local_128 = 0x5f;
      break;
    case 4:
      local_128 = 99;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02ae8);
      uVar3 = (undefined4)((ulonglong)pcVar10 >> 0x20);
      cVar1 = FUN_140e491e0(uVar4);
      if (cVar1 == '\0') {
        local_128 = 0x65;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_148 = 0;
        local_140 = 0;
        local_13c = 5;
        local_168 = CONCAT44(uRam0000000141ddbc7c,_DAT_141ddbc78);
        uStack_160 = uRam0000000141ddbc80;
        uStack_15c = DAT_141ddbc84;
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_168);
        local_b8 = local_f8;
        ppuVar13 = &local_b8;
        gml_Script_CreateBossUi(param_1,param_2,&local_148,1,ppuVar13);
        uVar3 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
        local_128 = 0x66;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02ae8);
        uStack_15c = 0xd;
        local_168 = 0x3ff0000000000000;
        if (&local_168 != puVar5) {
          local_158 = 0x3ff0000000000000;
          uStack_150 = uStack_160;
          uStack_14c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_158);
        }
        local_128 = 0x67;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0;
      }
      local_128 = 0x6a;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_148 = 0;
      local_140 = 0;
      local_13c = 5;
      uStack_15c = 0xf;
      local_168 = 0x10000000000007e;
      local_158 = 0x10000000000007e;
      uStack_150 = uStack_160;
      uStack_14c = 0xf;
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_158);
      local_b8 = local_f8;
      uVar7 = CONCAT44(uVar3,DAT_141a02ef8);
      uVar4 = FUN_140e634e0(param_1,param_2,&local_148,1,uVar7,&local_b8);
      uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
      cVar1 = FUN_140e491e0(uVar4);
      if (cVar1 == '\0') {
        local_128 = 0x6c;
        if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_120);
        }
        local_120 = 0;
        local_118 = 0;
        local_114 = 5;
        local_168 = CONCAT44(uRam00000001419ee6f4,_DAT_1419ee6f0);
        uStack_160 = uRam00000001419ee6f8;
        uStack_15c = uRam00000001419ee6fc;
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_168);
        local_b0 = local_e8;
        local_158 = CONCAT44(uRam0000000141dc7974,_DAT_141dc7970);
        uStack_150 = uRam0000000141dc7978;
        uStack_14c = uRam0000000141dc797c;
        if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_158);
        local_a8 = local_d8;
        FUN_140e645a0(&local_168,gml_Script_anon_83_gml_Object_oTutorialCombat_Create_0,param_1);
        local_158 = local_168;
        uStack_150 = uStack_160;
        uStack_14c = uStack_15c;
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_158);
        if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        local_a0 = local_c8;
        FUN_140e634e0(param_1,param_2,&local_120,3,CONCAT44(uVar3,DAT_1419f4dd8),&local_b0);
        local_128 = 0x72;
        uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f8678);
        FUN_140046040(uVar4);
      }
      local_128 = 0x77;
      break;
    case 5:
      local_128 = 0x7b;
    }
    goto switchD_140df4cb4_default;
  }
  local_128 = 2;
LAB_140df6374:
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return;
code_r0x000140df4c7a:
  uVar9 = uVar9 + 1;
  if (5 < uVar9) goto switchD_140df4cb4_default;
  goto LAB_140df4c50;
switchD_140df4cb4_default:
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  goto LAB_140df6374;
}

