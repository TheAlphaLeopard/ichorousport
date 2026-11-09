// gml_Script_anon_16884_SnowState_SnowState @ 0x1405040f0

longlong *
gml_Script_anon_16884_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 *puVar10;
  uint uVar11;
  code *pcVar12;
  ulonglong uVar13;
  undefined8 **in_stack_fffffffffffffe50;
  ulonglong uVar14;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  double local_198;
  uint local_18c;
  longlong local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  undefined8 local_128 [2];
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  
  local_140 = "gml_Script_anon@16181@SnowState@SnowState";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_138 = 0x1ff;
  pcVar12 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_128,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_17c = 0xffffff;
  local_188 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_15c = 0;
  local_168 = 0;
  local_16c = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18c = 0;
  local_198 = 0.0;
  puVar10 = &DAT_1419df7b0;
  if (param_4 < 1) {
    plVar8 = &DAT_1419df7b0;
  }
  else {
    plVar8 = (longlong *)*param_5;
  }
  iVar9 = 0;
  if ((*(int *)((longlong)plVar8 + 0xc) == 2) && (*plVar8 != 0)) {
    iVar9 = *(int *)(*plVar8 + 0x24);
  }
  if (0 < iVar9) {
    uVar11 = 0x3ff00000;
    do {
      iVar9 = iVar9 + -1;
      local_138 = 0x202;
      iVar2 = FUN_140e4a740(&local_198);
      if (param_4 < 1) {
        plVar8 = &DAT_1419df7b0;
      }
      else {
        plVar8 = (longlong *)*param_5;
      }
      if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar5 = *plVar8, lVar5 != 0)) {
        if ((iVar2 < 0) || (*(int *)(lVar5 + 0x24) <= iVar2)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar2,
                        *(undefined4 *)(lVar5 + 0x24));
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar5 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (plVar8 != &local_188) {
        local_1a8 = (undefined4)*plVar8;
        uStack_1a4 = *(undefined4 *)((longlong)plVar8 + 4);
        uStack_1a0 = (undefined4)plVar8[1];
        uStack_19c = *(undefined4 *)((longlong)plVar8 + 0xc);
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        FUN_140041b80(&local_188,&local_1a8);
      }
      uVar3 = local_18c & 0xffffff;
      if (uVar3 == 0) {
LAB_140504337:
        local_198 = local_198 + 1.0;
      }
      else if (uVar3 == 1) {
        local_198 = (double)FUN_140e4b060(&local_198);
        local_198 = local_198 + 1.0;
        local_18c = 0;
      }
      else if (uVar3 == 7) {
        local_198 = (double)CONCAT44(local_198._4_4_,local_198._0_4_ + 1);
      }
      else if (uVar3 == 10) {
        local_198 = (double)((longlong)local_198 + 1);
      }
      else {
        if (uVar3 == 0xd) {
          local_18c = 0;
          goto LAB_140504337;
        }
        FUN_140042910(&DAT_14172c3d8,&local_198,&local_198);
      }
      local_138 = 0x205;
      uVar14 = (ulonglong)in_stack_fffffffffffffe50 & 0xffffffffffffff00;
      uVar13 = (ulonglong)pcVar12 & 0xffffffffffffff00;
      FUN_140e87440(&local_188,DAT_1419fcec8,0x80000000,&local_98,uVar13,uVar14);
      local_1a8 = (undefined4)local_98;
      uStack_1a4 = local_98._4_4_;
      uStack_1a0 = uStack_90;
      uStack_19c = uStack_8c;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_1a8);
      local_138 = 0x206;
      local_cc = DAT_141dd3bf4;
      local_d0 = DAT_141dd3bf0;
      if ((1 << ((byte)DAT_141dd3bf4 & 0x1f) & 0x46U) == 0) {
        local_d8 = DAT_141dd3be8;
      }
      else {
        FUN_1400419b0(&local_d8,&DAT_141dd3be8);
      }
      iVar2 = FUN_140e851f0(&local_158,&local_d8,DAT_141955260,0);
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if (iVar2 == 0) {
        local_138 = 0x206;
        if (param_4 < 2) {
          puVar7 = &DAT_1419df7b0;
        }
        else {
          puVar7 = (undefined8 *)param_5[1];
          if (puVar7 == &local_158) goto LAB_14050449b;
        }
        local_1a8 = *(undefined4 *)puVar7;
        uStack_1a4 = *(undefined4 *)((longlong)puVar7 + 4);
        uStack_1a0 = *(undefined4 *)(puVar7 + 1);
        uStack_19c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_1a8);
      }
LAB_14050449b:
      local_138 = 0x209;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      FUN_140e87440(&local_188,DAT_1419fca98,0x80000000,&local_a8,uVar13 & 0xffffffffffffff00,
                    uVar14 & 0xffffffffffffff00);
      if (param_4 < 4) {
        puVar7 = &DAT_1419df7b0;
LAB_140504508:
        local_1a8 = *(undefined4 *)puVar7;
        uStack_1a4 = *(undefined4 *)((longlong)puVar7 + 4);
        uStack_1a0 = *(undefined4 *)(puVar7 + 1);
        uStack_19c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)local_128[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_128);
        }
        FUN_140041b80(local_128,&local_1a8);
      }
      else {
        puVar7 = (undefined8 *)param_5[3];
        if (puVar7 != local_128) goto LAB_140504508;
      }
      local_88 = local_128;
      switch(local_17c) {
      default:
switchD_140504557_caseD_1:
        lVar5 = 0;
        break;
      case 6:
        lVar5 = local_188;
        break;
      case 0xf:
        iVar2 = (int)((ulonglong)local_188 >> 0x20);
        if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140504557_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        uVar4 = FUN_140e4a8b0(&local_188);
        lVar5 = FUN_140e87250(uVar4);
      }
      in_stack_fffffffffffffe50 = &local_88;
      pcVar12 = (code *)&local_a8;
      uVar6 = FUN_140e63610(lVar5,param_2,&local_168,1,pcVar12,in_stack_fffffffffffffe50);
      cVar1 = FUN_140e491e0(uVar6);
      if (cVar1 != '\0') {
        local_138 = 0x20a;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcfa8);
        uVar14 = (ulonglong)in_stack_fffffffffffffe50 & 0xffffffffffffff00;
        uVar13 = (ulonglong)pcVar12 & 0xffffffffffffff00;
        FUN_140e87440(&local_188,DAT_1419fcdf8,0x80000000,&local_b8,uVar13,uVar14);
        FUN_140e87440(&local_188,DAT_1419fcb58,0x80000000,&local_c8,uVar13 & 0xffffffffffffff00,
                      uVar14 & 0xffffffffffffff00);
        local_80 = &local_158;
        local_1a8 = (undefined4)local_b8;
        uStack_1a4 = local_b8._4_4_;
        uStack_1a0 = uStack_b0;
        uStack_19c = uStack_ac;
        if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_1a8);
        local_78 = &local_108;
        local_1a8 = (undefined4)local_c8;
        uStack_1a4 = local_c8._4_4_;
        uStack_1a0 = uStack_c0;
        uStack_19c = uStack_bc;
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_1a8);
        local_70 = local_f8;
        if (param_4 < 4) {
          puVar7 = &DAT_1419df7b0;
LAB_140504838:
          local_1a8 = *(undefined4 *)puVar7;
          uStack_1a4 = *(undefined4 *)((longlong)puVar7 + 4);
          uStack_1a0 = *(undefined4 *)(puVar7 + 1);
          uStack_19c = *(undefined4 *)((longlong)puVar7 + 0xc);
          if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          FUN_140041b80(&local_e8,&local_1a8);
        }
        else {
          puVar7 = (undefined8 *)param_5[3];
          if (puVar7 != &local_e8) goto LAB_140504838;
        }
        local_68 = &local_e8;
        FUN_140e63610(param_1,param_2,&local_178,4,uVar6,&local_80);
        uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
        local_138 = 0x20b;
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        local_168 = 0;
        local_160 = 0;
        local_15c = 5;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcd18);
        local_88 = &local_158;
        if (param_4 < 2) {
          puVar7 = &DAT_1419df7b0;
LAB_140504927:
          local_1a8 = *(undefined4 *)puVar7;
          uStack_1a4 = *(undefined4 *)((longlong)puVar7 + 4);
          uStack_1a0 = *(undefined4 *)(puVar7 + 1);
          uStack_19c = *(undefined4 *)((longlong)puVar7 + 0xc);
          if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          FUN_140041b80(&local_118,&local_1a8);
        }
        else {
          puVar7 = (undefined8 *)param_5[1];
          if (puVar7 != &local_118) goto LAB_140504927;
        }
        local_80 = &local_118;
        if ((param_4 < 3) || (puVar10 = (undefined8 *)param_5[2], puVar10 != &local_108)) {
          local_1a8 = *(undefined4 *)puVar10;
          uStack_1a4 = *(undefined4 *)((longlong)puVar10 + 4);
          uStack_1a0 = *(undefined4 *)(puVar10 + 1);
          uStack_19c = *(undefined4 *)((longlong)puVar10 + 0xc);
          if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          FUN_140041b80(&local_108,&local_1a8);
        }
        local_78 = &local_108;
        local_1a8 = (undefined4)DAT_141dd3c08;
        uStack_1a4 = DAT_141dd3c08._4_4_;
        uStack_1a0 = DAT_141dd3c10;
        uStack_19c = DAT_141dd3c14;
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_1a8);
        local_70 = local_f8;
        puVar10 = (undefined8 *)
                  FUN_140e634e0(param_1,param_2,&local_178,3,CONCAT44(uVar4,DAT_1419fdca8),&local_88
                               );
        if (puVar10 != &local_e8) {
          local_1a8 = *(undefined4 *)puVar10;
          uStack_1a4 = *(undefined4 *)((longlong)puVar10 + 4);
          uStack_1a0 = *(undefined4 *)(puVar10 + 1);
          uStack_19c = *(undefined4 *)((longlong)puVar10 + 0xc);
          if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          FUN_140041b80(&local_e8,&local_1a8);
        }
        local_68 = &local_e8;
        FUN_140e63610(param_1,param_2,&local_168,2,uVar6,&local_70);
        local_138 = 0x20c;
        goto LAB_1405045d9;
      }
    } while (0 < iVar9);
  }
  local_138 = 0x210;
  uVar11 = 0;
LAB_1405045d9:
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  *param_3 = (ulonglong)uVar11 << 0x20;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  _eh_vector_destructor_iterator_(local_128,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return param_3;
}

