// gml_GlobalScript___InputClassPlayer @ 0x140044310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript___InputClassPlayer(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined4 uVar9;
  undefined8 uVar8;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  local_70 = "gml_Script___UpdatePrevValues@anon@975@__InputClassGamepad@__InputClassGamepad";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x20;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_c8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x22;
  uStack_dc = 0xd;
  local_e8 = 0;
  cVar2 = FUN_140e491e0(&local_e8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if (cVar2 == '\0') {
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd318);
    cVar2 = FUN_140e491e0(uVar3);
    if (cVar2 == '\0') {
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd1f8);
      if (puVar4 != &local_c8) {
        local_e8 = *puVar4;
        uStack_e0 = *(undefined4 *)(puVar4 + 1);
        uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_e8);
      }
      local_60 = &local_c8;
      uVar8 = CONCAT44(uVar9,DAT_1419fd258);
      uVar3 = FUN_140e634e0(param_1,param_2,&local_d8,1,uVar8,&local_60);
      uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
      cVar2 = FUN_140e491e0(uVar3);
      if (cVar2 != '\0') {
        local_68 = 0x2d;
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        local_d8 = 0;
        local_d0 = 0;
        local_cc = 5;
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd2d8);
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd358);
        if (puVar4 != &local_c8) {
          local_e8 = *puVar4;
          uStack_e0 = *(undefined4 *)(puVar4 + 1);
          uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c8);
          }
          FUN_140041b80(&local_c8,&local_e8);
        }
        local_60 = &local_c8;
        local_e8 = CONCAT44(uRam0000000141dc5fd4,_DAT_141dc5fd0);
        uStack_e0 = uRam0000000141dc5fd8;
        uStack_dc = uRam0000000141dc5fdc;
        if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_e8);
        local_58 = local_b8;
        if (puVar5 != &local_a8) {
          local_e8 = *puVar5;
          uStack_e0 = *(undefined4 *)(puVar5 + 1);
          uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_a8);
          }
          FUN_140041b80(&local_a8,&local_e8);
        }
        local_50 = &local_a8;
        local_e8 = CONCAT44(uRam0000000141dc5fd4,_DAT_141dc5fd0);
        uStack_e0 = uRam0000000141dc5fd8;
        uStack_dc = uRam0000000141dc5fdc;
        if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_98);
        }
        FUN_140041b80(local_98,&local_e8);
        local_48 = local_98;
        local_e8 = CONCAT44(uRam00000001419df814,_DAT_1419df810);
        uStack_e0 = uRam00000001419df818;
        uStack_dc = uRam00000001419df81c;
        if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_88);
        }
        FUN_140041b80(local_88,&local_e8);
        local_40 = local_88;
        FUN_140e634e0(param_1,param_2,&local_d8,5,CONCAT44(uVar9,DAT_1419fd348),&local_60);
        local_68 = 0x2e;
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        local_d8 = 0;
        local_d0 = 0;
        local_cc = 5;
        plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd228);
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd1f8);
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd358);
        if (puVar4 != &local_c8) {
          local_e8 = *puVar4;
          uStack_e0 = *(undefined4 *)(puVar4 + 1);
          uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c8);
          }
          FUN_140041b80(&local_c8,&local_e8);
        }
        local_60 = &local_c8;
        local_e8 = CONCAT44(uRam00000001419df7d4,_DAT_1419df7d0);
        uStack_e0 = uRam00000001419df7d8;
        uStack_dc = uRam00000001419df7dc;
        if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_e8);
        local_58 = local_b8;
        FUN_140e609c0(param_1);
        if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0))
        {
          if (*(int *)(lVar1 + 0x24) < 0x11) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",0x10);
            plVar6 = (longlong *)0x0;
          }
          else {
            plVar6 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x100);
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        puVar7 = (undefined8 *)FUN_140e48e40(puVar5,0);
        FUN_140e609c0(*(undefined8 *)*puVar5);
        puVar5 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_d8,2,plVar6,&local_60);
        if (puVar5 != puVar7) {
          local_e8 = *puVar5;
          uStack_e0 = *(undefined4 *)(puVar5 + 1);
          uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar7);
          }
          FUN_140041b80(puVar7,&local_e8);
        }
        FUN_140e60910(2);
        local_68 = 0x2f;
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        local_d8 = 0;
        local_d0 = 0;
        local_cc = 5;
        plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd228);
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd358);
        if (puVar4 != &local_c8) {
          local_e8 = *puVar4;
          uStack_e0 = *(undefined4 *)(puVar4 + 1);
          uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c8);
          }
          FUN_140041b80(&local_c8,&local_e8);
        }
        local_60 = &local_c8;
        local_e8 = CONCAT44(uRam00000001419df804,_DAT_1419df800);
        uStack_e0 = uRam00000001419df808;
        uStack_dc = uRam00000001419df80c;
        if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_e8);
        local_58 = local_b8;
        FUN_140e609c0(param_1);
        if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0))
        {
          if (*(int *)(lVar1 + 0x24) < 0x12) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",0x11);
            plVar6 = (longlong *)0x0;
          }
          else {
            plVar6 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x110);
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        puVar7 = (undefined8 *)FUN_140e48e40(puVar5,1);
        FUN_140e609c0(*(undefined8 *)*puVar5);
        puVar5 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_d8,2,plVar6,&local_60);
        if (puVar5 != puVar7) {
          local_e8 = *puVar5;
          uStack_e0 = *(undefined4 *)(puVar5 + 1);
          uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar7);
          }
          FUN_140041b80(puVar7,&local_e8);
        }
        FUN_140e60910(2);
        local_68 = 0x30;
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        local_d8 = 0;
        local_d0 = 0;
        local_cc = 5;
        plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd228);
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd358);
        if (puVar4 != &local_c8) {
          local_e8 = *puVar4;
          uStack_e0 = *(undefined4 *)(puVar4 + 1);
          uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c8);
          }
          FUN_140041b80(&local_c8,&local_e8);
        }
        local_60 = &local_c8;
        local_e8 = CONCAT44(uRam00000001419df7e4,_DAT_1419df7e0);
        uStack_e0 = uRam00000001419df7e8;
        uStack_dc = uRam00000001419df7ec;
        if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_e8);
        local_58 = local_b8;
        FUN_140e609c0(param_1);
        if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0))
        {
          if (*(int *)(lVar1 + 0x24) < 0x13) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",0x12);
            plVar6 = (longlong *)0x0;
          }
          else {
            plVar6 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x120);
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        puVar7 = (undefined8 *)FUN_140e48e40(puVar5,2);
        FUN_140e609c0(*(undefined8 *)*puVar5);
        puVar5 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_d8,2,plVar6,&local_60);
        if (puVar5 != puVar7) {
          local_e8 = *puVar5;
          uStack_e0 = *(undefined4 *)(puVar5 + 1);
          uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar7);
          }
          FUN_140041b80(puVar7,&local_e8);
        }
        FUN_140e60910(2);
        local_68 = 0x31;
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        local_d8 = 0;
        local_d0 = 0;
        local_cc = 5;
        plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd228);
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd358);
        if (puVar4 != &local_c8) {
          local_e8 = *puVar4;
          uStack_e0 = *(undefined4 *)(puVar4 + 1);
          uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c8);
          }
          FUN_140041b80(&local_c8,&local_e8);
        }
        local_60 = &local_c8;
        local_e8 = CONCAT44(uRam00000001419df824,_DAT_1419df820);
        uStack_e0 = uRam00000001419df828;
        uStack_dc = uRam00000001419df82c;
        if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_e8);
        local_58 = local_b8;
        FUN_140e609c0(param_1);
        if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0))
        {
          if (*(int *)(lVar1 + 0x24) < 0x14) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",0x13);
            plVar6 = (longlong *)0x0;
          }
          else {
            plVar6 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x130);
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        puVar7 = (undefined8 *)FUN_140e48e40(puVar5,3);
        FUN_140e609c0(*(undefined8 *)*puVar5);
        puVar5 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_d8,2,plVar6,&local_60);
        if (puVar5 != puVar7) {
          local_e8 = *puVar5;
          uStack_e0 = *(undefined4 *)(puVar5 + 1);
          uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar7);
          }
          FUN_140041b80(puVar7,&local_e8);
        }
        FUN_140e60910(2);
        local_68 = 0x32;
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        local_d8 = 0;
        local_d0 = 0;
        local_cc = 5;
        plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd228);
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd358);
        if (puVar4 != &local_c8) {
          local_e8 = *puVar4;
          uStack_e0 = *(undefined4 *)(puVar4 + 1);
          uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c8);
          }
          FUN_140041b80(&local_c8,&local_e8);
        }
        local_60 = &local_c8;
        local_e8 = CONCAT44(uRam00000001419df834,_DAT_1419df830);
        uStack_e0 = uRam00000001419df838;
        uStack_dc = uRam00000001419df83c;
        if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_e8);
        local_58 = local_b8;
        FUN_140e609c0(param_1);
        if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0))
        {
          if (*(int *)(lVar1 + 0x24) < 7) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",6);
            plVar6 = (longlong *)0x0;
          }
          else {
            plVar6 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x60);
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        puVar7 = (undefined8 *)FUN_140e48e40(puVar5,4);
        FUN_140e609c0(*(undefined8 *)*puVar5);
        puVar5 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_d8,2,plVar6,&local_60);
        if (puVar5 != puVar7) {
          local_e8 = *puVar5;
          uStack_e0 = *(undefined4 *)(puVar5 + 1);
          uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar7);
          }
          FUN_140041b80(puVar7,&local_e8);
        }
        FUN_140e60910(2);
        local_68 = 0x33;
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        local_d8 = 0;
        local_d0 = 0;
        local_cc = 5;
        plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd228);
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd358);
        if (puVar4 != &local_c8) {
          local_e8 = *puVar4;
          uStack_e0 = *(undefined4 *)(puVar4 + 1);
          uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c8);
          }
          FUN_140041b80(&local_c8,&local_e8);
        }
        local_60 = &local_c8;
        local_e8 = CONCAT44(uRam00000001419df7f4,_DAT_1419df7f0);
        uStack_e0 = uRam00000001419df7f8;
        uStack_dc = uRam00000001419df7fc;
        if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_e8);
        local_58 = local_b8;
        FUN_140e609c0(param_1);
        if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0))
        {
          if (*(int *)(lVar1 + 0x24) < 8) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",7);
            plVar6 = (longlong *)0x0;
          }
          else {
            plVar6 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x70);
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        puVar4 = (undefined8 *)FUN_140e48e40(puVar5,5);
        FUN_140e609c0(*(undefined8 *)*puVar5);
        puVar5 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_d8,2,plVar6,&local_60);
        if (puVar5 != puVar4) {
          local_e8 = *puVar5;
          uStack_e0 = *(undefined4 *)(puVar5 + 1);
          uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar4);
          }
          FUN_140041b80(puVar4,&local_e8);
        }
        FUN_140e60910(2);
        goto LAB_1400452a5;
      }
    }
  }
  local_68 = 0x24;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd2d8);
  FUN_140e609c0(param_1);
  puVar5 = (undefined8 *)FUN_140e48e40(puVar4,0);
  FUN_140e609c0(*(undefined8 *)*puVar4);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  FUN_140e60910(2);
  local_68 = 0x25;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd2d8);
  FUN_140e609c0(param_1);
  puVar5 = (undefined8 *)FUN_140e48e40(puVar4,1);
  FUN_140e609c0(*(undefined8 *)*puVar4);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  FUN_140e60910(2);
  local_68 = 0x26;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd2d8);
  FUN_140e609c0(param_1);
  puVar5 = (undefined8 *)FUN_140e48e40(puVar4,2);
  FUN_140e609c0(*(undefined8 *)*puVar4);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  FUN_140e60910(2);
  local_68 = 0x27;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd2d8);
  FUN_140e609c0(param_1);
  puVar5 = (undefined8 *)FUN_140e48e40(puVar4,3);
  FUN_140e609c0(*(undefined8 *)*puVar4);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  FUN_140e60910(2);
  local_68 = 0x28;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd2d8);
  FUN_140e609c0(param_1);
  puVar5 = (undefined8 *)FUN_140e48e40(puVar4,4);
  FUN_140e609c0(*(undefined8 *)*puVar4);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  FUN_140e60910(2);
  local_68 = 0x29;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd2d8);
  FUN_140e609c0(param_1);
  puVar5 = (undefined8 *)FUN_140e48e40(puVar4,5);
  FUN_140e609c0(*(undefined8 *)*puVar4);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  FUN_140e60910(2);
  local_68 = 0x2a;
LAB_1400452a5:
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

