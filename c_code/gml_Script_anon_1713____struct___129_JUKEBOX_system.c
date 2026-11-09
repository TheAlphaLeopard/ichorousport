// gml_Script_anon_1713____struct___129_JUKEBOX_system @ 0x140392550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1713____struct___129_JUKEBOX_system
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 **ppuVar5;
  undefined1 **ppuVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 ***pppuVar11;
  undefined8 **ppuVar12;
  ulonglong uVar13;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined1 *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  undefined1 *local_160;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  undefined1 *local_f8;
  byte local_ec;
  undefined1 *local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined1 **local_88;
  undefined1 **local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  
  local_170 = "gml_Script_anon@735@___struct___129@JUKEBOX_system";
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  local_168 = 0x20;
  _eh_vector_constructor_iterator_(&local_f8,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_154 = 0xffffff;
  local_160 = (undefined1 *)0x0;
  uStack_1bc = 0xffffff;
  local_1c8 = (undefined1 *)0x0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_1ac = 0xffffff;
  local_1b8 = (undefined1 *)0x0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  ppuVar5 = (undefined1 **)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f4978);
  local_144 = 0xffffff;
  local_150 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  local_18c = 0;
  local_198 = 0;
  local_19c = 0;
  local_1a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_168 = 0x21;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
LAB_1403926a9:
    local_1e8 = (undefined1 *)*param_5;
    uStack_1e0 = *(undefined4 *)(param_5 + 1);
    uStack_1dc = *(undefined4 *)((longlong)param_5 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1e8);
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if ((undefined1 **)param_5 != &local_e8) goto LAB_1403926a9;
  }
  local_80 = &local_e8;
  pppuVar11 = &local_80;
  ppuVar6 = (undefined1 **)gml_Script_jump_predictor(param_1,param_2,&local_1f8,1,pppuVar11);
  uVar4 = (undefined4)((ulonglong)pppuVar11 >> 0x20);
  if (ppuVar6 != &local_160) {
    local_1e8 = *ppuVar6;
    uStack_1e0 = *(undefined4 *)(ppuVar6 + 1);
    uStack_1dc = *(undefined4 *)((longlong)ppuVar6 + 0xc);
    if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_160);
    }
    FUN_140041b80(&local_160,&local_1e8);
  }
  local_168 = 0x22;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  ppuVar6 = (undefined1 **)(**(code **)(*param_1 + 8))(param_1,DAT_1419f49e8);
  if (ppuVar6 != &local_f8) {
    local_1e8 = *ppuVar6;
    uStack_1e0 = *(undefined4 *)(ppuVar6 + 1);
    uStack_1dc = *(undefined4 *)((longlong)ppuVar6 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_1e8);
  }
  local_88 = &local_f8;
  local_80 = &local_160;
  ppuVar12 = &local_88;
  puVar9 = (undefined8 *)CONCAT44(uVar4,DAT_141a01138);
  ppuVar6 = (undefined1 **)FUN_140e634e0(param_1,param_2,&local_1f8,2,puVar9,ppuVar12);
  if (ppuVar6 != &local_1c8) {
    local_1e8 = *ppuVar6;
    uStack_1e0 = *(undefined4 *)(ppuVar6 + 1);
    uStack_1dc = *(undefined4 *)((longlong)ppuVar6 + 0xc);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_1e8);
  }
  local_168 = 0x24;
  iVar2 = FUN_140e851f0(&local_1c8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_168 = 0x25;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    uVar8 = FUN_1400424f0(&local_1e8,&DAT_141dd2378);
    FUN_140041c60(&local_f8,uVar8);
    FUN_140041b30(&local_1e8);
    local_88 = &local_f8;
    local_80 = &local_160;
    uVar8 = FUN_140e64420(param_1,param_2,&local_1f8,2,&local_88);
    FUN_140e59370(&local_1e8,uVar8);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_1e8,(ThrowInfo *)&DAT_141951a48);
  }
  local_168 = 0x28;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4d68);
  uStack_1cc = 0;
  local_1d8 = &DAT_bff0000000000000;
  iVar2 = FUN_140e851f0(puVar7,&local_1d8,DAT_141955260,0);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if (iVar2 != 0) {
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4d68);
    FUN_140e87440(puVar7,DAT_141a0aa28,0x80000000,&local_110,(ulonglong)puVar9 & 0xffffffffffffff00,
                  (ulonglong)ppuVar12 & 0xffffffffffffff00);
    uVar8 = FUN_140069500(puVar7);
    ppuVar12 = (undefined8 **)0x0;
    puVar9 = &local_110;
    uVar8 = FUN_140e63610(uVar8,param_2,&local_1f8,0,puVar9,0);
    iVar2 = FUN_140e851f0(uVar8,&local_160,DAT_141955260,0);
    if (iVar2 == 0) {
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4d68);
      FUN_140e87440(puVar7,DAT_1419f49a8,0x80000000,&local_120,
                    (ulonglong)puVar9 & 0xffffffffffffff00,(ulonglong)ppuVar12 & 0xffffffffffffff00)
      ;
      uVar8 = FUN_140069500(puVar7);
      puVar9 = &local_120;
      ppuVar6 = (undefined1 **)FUN_140e63610(uVar8,param_2,&local_1a8,0,puVar9,0);
      uVar4 = (undefined4)((ulonglong)puVar9 >> 0x20);
      if (ppuVar6 != &local_f8) {
        local_1e8 = *ppuVar6;
        uStack_1e0 = *(undefined4 *)(ppuVar6 + 1);
        uStack_1dc = *(undefined4 *)((longlong)ppuVar6 + 0xc);
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140041b80(&local_f8,&local_1e8);
      }
      local_88 = &local_f8;
      ppuVar12 = &local_88;
      puVar9 = (undefined8 *)CONCAT44(uVar4,DAT_141a07888);
      uVar8 = FUN_140e634e0(param_1,param_2,&local_198,1,puVar9,ppuVar12);
      cVar1 = FUN_140e491e0(uVar8);
      if (cVar1 != '\0') {
        local_168 = 0x2b;
        puVar9 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4d68);
        if (puVar9 != param_3) {
          local_1e8 = (undefined1 *)*puVar9;
          uStack_1e0 = *(undefined4 *)(puVar9 + 1);
          uStack_1dc = *(undefined4 *)((longlong)puVar9 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(param_3);
          }
          FUN_140041b80(param_3,&local_1e8);
        }
        if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_150);
        }
        if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_140);
        }
        if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_130);
        }
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_120);
        }
        if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_110);
        }
        if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_160);
        }
        goto LAB_1403935a6;
      }
    }
  }
  local_168 = 0x2e;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4ac8);
  uStack_1cc = 0;
  local_1d8 = &DAT_bff0000000000000;
  iVar2 = FUN_140e851f0(uVar8,&local_1d8,DAT_141955260,0);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if (iVar2 != 0) {
    local_168 = 0x2e;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4cf8);
    ppuVar12 = (undefined8 **)0x0;
    FUN_140e63610(param_1,param_2,&local_1f8,0,puVar9,0);
  }
  local_168 = 0x30;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1ac = 0;
  local_1b8 = (undefined1 *)0x0;
  local_168 = 0x31;
  uStack_1cc = 0;
  local_1d8 = &DAT_bff0000000000000;
  iVar2 = FUN_140e851f0(puVar7,&local_1d8,DAT_141955260,0);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if (iVar2 != 0) {
    local_168 = 0x32;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4d68);
    FUN_140e87440(uVar8,DAT_1419f4ce8,0x80000000,&local_130,(ulonglong)puVar9 & 0xffffffffffffff00,
                  (ulonglong)ppuVar12 & 0xffffffffffffff00);
    uVar8 = FUN_140069500(uVar8);
    uVar13 = 0;
    puVar9 = &local_130;
    ppuVar6 = (undefined1 **)FUN_140e63610(uVar8,param_2,&local_1f8,0,puVar9,0);
    if (ppuVar6 != &local_1b8) {
      local_1e8 = *ppuVar6;
      uStack_1e0 = *(undefined4 *)(ppuVar6 + 1);
      uStack_1dc = *(undefined4 *)((longlong)ppuVar6 + 0xc);
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_1e8);
    }
    local_168 = 0x33;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4d68);
    FUN_140e87440(puVar7,DAT_141a580f0,0x80000000,&local_140,(ulonglong)puVar9 & 0xffffffffffffff00,
                  uVar13 & 0xffffffffffffff00);
    uVar8 = FUN_140069500(puVar7);
    ppuVar12 = (undefined8 **)0x0;
    puVar9 = &local_140;
    FUN_140e63610(uVar8,param_2,&local_1f8,0,puVar9,0);
  }
  local_168 = 0x36;
  ppuVar6 = (undefined1 **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4d68);
  FUN_140e609c0(param_1);
  if (&local_1c8 != ppuVar6) {
    local_1e8 = local_1c8;
    uStack_1e0 = uStack_1c0;
    uStack_1dc = uStack_1bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(ppuVar6);
    }
    FUN_140041b80(ppuVar6,&local_1e8);
  }
  FUN_140e60910(1);
  local_168 = 0x38;
  uStack_1cc = 0;
  local_1d8 = (undefined1 *)0x0;
  iVar2 = FUN_140e851f0(&local_1b8,&local_1d8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uVar3 = 1 << ((byte)local_1ec & 0x1f);
  if (iVar2 < 1) {
    local_168 = 0x3c;
    if ((uVar3 & 0x46) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    FUN_140e87440(&local_1c8,DAT_1419f4a98,0x80000000,&local_150,
                  (ulonglong)puVar9 & 0xffffffffffffff00,(ulonglong)ppuVar12 & 0xffffffffffffff00);
    switch(uStack_1bc) {
    default:
switchD_140393407_caseD_1:
      puVar10 = (undefined1 *)0x0;
      break;
    case 6:
      puVar10 = local_1c8;
      break;
    case 0xf:
      iVar2 = (int)((ulonglong)local_1c8 >> 0x20);
      if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140393407_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar4 = FUN_140e4a8b0(&local_1c8);
      puVar10 = (undefined1 *)FUN_140e87250(uVar4);
    }
    FUN_140e63610(puVar10,param_2,&local_1f8,0,&local_150,0);
  }
  else {
    local_168 = 0x39;
    if ((uVar3 & 0x46) != 0) {
      FUN_140041a50(&local_1f8);
    }
    uVar4 = (undefined4)((ulonglong)puVar9 >> 0x20);
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_188,gml_Script_anon_735____struct___129_JUKEBOX_system,0);
    if (&local_188 != ppuVar5) {
      local_1e8 = local_188;
      uStack_1e0 = uStack_180;
      uStack_1dc = uStack_17c;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar5);
      }
      FUN_140041b80(ppuVar5,&local_1e8);
    }
    FUN_140e60910(1);
    if (ppuVar5 != &local_f8) {
      local_1e8 = *ppuVar5;
      uStack_1e0 = *(undefined4 *)(ppuVar5 + 1);
      uStack_1dc = *(undefined4 *)((longlong)ppuVar5 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_1e8);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_88 = &local_f8;
    local_80 = &local_1c8;
    uVar8 = CONCAT44(uVar4,DAT_1419fd6d8);
    puVar9 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1a8,2,uVar8,&local_88);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if (puVar9 != &local_d8) {
      local_1e8 = (undefined1 *)*puVar9;
      uStack_1e0 = *(undefined4 *)(puVar9 + 1);
      uStack_1dc = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_1e8);
    }
    local_78 = &local_d8;
    FUN_140e645a0(&local_1e8,gml_Script_anon_1571____struct___129_JUKEBOX_system,param_1);
    local_1d8 = local_1e8;
    uStack_1d0 = uStack_1e0;
    uStack_1cc = uStack_1dc;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_1d8);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_70 = local_c8;
    uStack_17c = local_1ac;
    uStack_180 = local_1b0;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
      local_188 = local_1b8;
    }
    else {
      FUN_1400419b0(&local_188,&local_1b8);
    }
    uStack_1dc = 7;
    local_1e8 = (undefined1 *)CONCAT44(local_1e8._4_4_,10);
    FUN_1400460e0(&local_188,&local_1e8);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    uStack_1cc = uStack_17c;
    uStack_1d0 = uStack_180;
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
      local_1d8 = local_188;
    }
    else {
      FUN_1400419b0(&local_1d8,&local_188);
    }
    uStack_1dc = 0;
    local_1e8 = (undefined1 *)0x408f400000000000;
    FUN_140046500(&local_1d8,&local_1e8);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = local_1d8;
    uStack_1e0 = uStack_1d0;
    uStack_1dc = uStack_1cc;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_1e8);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_68 = local_b8;
    local_1e8 = (undefined1 *)CONCAT44(uRam0000000141dc6514,_DAT_141dc6510);
    uStack_1e0 = uRam0000000141dc6518;
    uStack_1dc = uRam0000000141dc651c;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_1e8);
    local_60 = local_a8;
    uVar8 = CONCAT44(uVar4,DAT_1419fed78);
    puVar9 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_198,2,uVar8,&local_78);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if (puVar9 != &local_98) {
      local_1e8 = (undefined1 *)*puVar9;
      uStack_1e0 = *(undefined4 *)(puVar9 + 1);
      uStack_1dc = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_1e8);
    }
    local_58 = &local_98;
    FUN_140e634e0(param_1,param_2,&local_1f8,3,CONCAT44(uVar4,DAT_1419f4dd8),&local_68);
  }
  local_168 = 0x3f;
  if (puVar7 != param_3) {
    local_1e8 = (undefined1 *)*puVar7;
    uStack_1e0 = *(undefined4 *)(puVar7 + 1);
    uStack_1dc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_1e8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
LAB_1403935a6:
  _eh_vector_destructor_iterator_(&local_f8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_178;
  return param_3;
}

