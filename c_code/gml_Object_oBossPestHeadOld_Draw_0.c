// gml_Object_oBossPestHeadOld_Draw_0 @ 0x1407b5960

void gml_Object_oBossPestHeadOld_Draw_0(longlong ***param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong ***ppplVar5;
  longlong ****pppplVar6;
  byte bVar7;
  longlong ***ppplVar8;
  longlong ****pppplVar9;
  float fVar10;
  longlong ***local_res8;
  longlong ***local_b8;
  uint uStack_b0;
  undefined4 uStack_ac;
  longlong ***local_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  longlong ***local_98;
  uint uStack_90;
  undefined4 uStack_8c;
  longlong ***local_88;
  uint uStack_80;
  undefined4 uStack_7c;
  longlong ***local_78;
  undefined8 uStack_70;
  longlong ***local_68;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Object_oBossPestHeadOld_Alarm_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  uStack_9c = 0xffffff;
  local_a8 = (longlong ***)0x0;
  uStack_ac = 0xffffff;
  local_b8 = (longlong ***)0x0;
  local_48 = 4;
  local_res8 = param_1;
  puVar4 = (undefined8 *)(*(code *)(*param_1)[1])(param_1,DAT_1419feb18);
  ppplVar5 = (longlong ***)(*(code *)(*local_res8)[2])(local_res8,DAT_1419feb18);
  uStack_7c = 0;
  local_88 = (longlong ***)0x0;
  iVar3 = FUN_140e851f0(puVar4,&local_88,DAT_141955260,0);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (iVar3 == 0) {
    uStack_70 = (longlong ***)CONCAT44(6,(uint)uStack_70);
    local_78 = local_res8;
    FUN_140e87440(&local_78,DAT_1419fe0e8,0x80000000,&local_a8,0,0);
    if ((1 << ((byte)((ulonglong)uStack_70 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    uStack_7c = uStack_9c;
    uStack_80 = uStack_a0;
    if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) == 0) {
      local_88 = local_a8;
    }
    else {
      FUN_1400419b0(&local_88,&local_a8);
    }
    ppplVar8 = (longlong ***)&local_88;
    bVar2 = true;
    bVar1 = false;
  }
  else {
    uStack_8c = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_90 = *(uint *)(puVar4 + 1);
    if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) == 0) {
      local_98 = (longlong ***)*puVar4;
    }
    else {
      FUN_1400419b0(&local_98,puVar4);
    }
    ppplVar8 = (longlong ***)&local_98;
    bVar2 = false;
    bVar1 = true;
  }
  FUN_140e609c0(local_res8);
  if (ppplVar8 != ppplVar5) {
    local_78 = (longlong ***)*ppplVar8;
    uStack_70 = (longlong ***)ppplVar8[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)ppplVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(ppplVar5);
    }
    FUN_140041b80(ppplVar5,&local_78);
  }
  if (bVar1) {
    if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
  }
  if (bVar2) {
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
  }
  FUN_140e60910(1);
  local_48 = 5;
  puVar4 = (undefined8 *)(*(code *)(*local_res8)[1])(local_res8,DAT_1419feb38);
  ppplVar5 = (longlong ***)(*(code *)(*local_res8)[2])(local_res8,DAT_1419feb38);
  uStack_70 = (longlong ***)((ulonglong)uStack_70 & 0xffffffff);
  local_78 = (longlong ***)0x0;
  iVar3 = FUN_140e851f0(puVar4,&local_78,DAT_141955260,0);
  if ((1 << ((byte)((ulonglong)uStack_70 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (iVar3 == 0) {
    uStack_70 = (longlong ***)CONCAT44(6,(uint)uStack_70);
    local_78 = local_res8;
    FUN_140e87440(&local_78,DAT_1419fe158,0x80000000,&local_b8,0,0);
    if ((1 << ((byte)((ulonglong)uStack_70 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    uStack_8c = uStack_ac;
    uStack_90 = uStack_b0;
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) == 0) {
      local_98 = local_b8;
    }
    else {
      FUN_1400419b0(&local_98,&local_b8);
    }
    ppplVar8 = (longlong ***)&local_98;
    bVar2 = true;
    bVar1 = false;
  }
  else {
    uStack_7c = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_80 = *(uint *)(puVar4 + 1);
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) == 0) {
      local_88 = (longlong ***)*puVar4;
    }
    else {
      FUN_1400419b0(&local_88,puVar4);
    }
    ppplVar8 = (longlong ***)&local_88;
    bVar2 = false;
    bVar1 = true;
  }
  FUN_140e609c0(local_res8);
  if (ppplVar8 != ppplVar5) {
    local_78 = (longlong ***)*ppplVar8;
    uStack_70 = (longlong ***)ppplVar8[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)ppplVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(ppplVar5);
    }
    FUN_140041b80(ppplVar5,&local_78);
  }
  if (bVar1) {
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
  }
  if (bVar2) {
    if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
  }
  FUN_140e60910(1);
  local_48 = 7;
  ppplVar5 = (longlong ***)(*(code *)(*local_res8)[2])(local_res8,DAT_141a09208);
  uStack_70._4_4_ = 6;
  local_78 = local_res8;
  FUN_140e87440(&local_78,DAT_1419fe0e8,0x80000000,&local_a8,0,0);
  if ((1 << ((byte)uStack_70._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140e609c0(local_res8);
  if (&local_a8 != (longlong ****)ppplVar5) {
    local_78 = local_a8;
    uStack_70._0_4_ = uStack_a0;
    uStack_70._4_4_ = uStack_9c;
    if ((1 << ((byte)*(undefined4 *)((longlong)ppplVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(ppplVar5);
    }
    FUN_140041b80(ppplVar5,&local_78);
  }
  FUN_140e60910(1);
  local_48 = 8;
  ppplVar5 = (longlong ***)(*(code *)(*local_res8)[2])(local_res8,DAT_141a091f8);
  uStack_70._4_4_ = 6;
  local_78 = local_res8;
  FUN_140e87440(&local_78,DAT_1419fe158,0x80000000,&local_b8,0,0);
  if ((1 << ((byte)uStack_70._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140e609c0(local_res8);
  if (&local_b8 != (longlong ****)ppplVar5) {
    local_78 = local_b8;
    uStack_70._0_4_ = uStack_b0;
    uStack_70._4_4_ = uStack_ac;
    if ((1 << ((byte)*(undefined4 *)((longlong)ppplVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(ppplVar5);
    }
    FUN_140041b80(ppplVar5,&local_78);
  }
  FUN_140e60910(1);
  local_48 = 10;
  puVar4 = (undefined8 *)(*(code *)(*local_res8)[2])(local_res8,DAT_1419fd3c8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  local_48 = 0xb;
  puVar4 = (undefined8 *)(*(code *)(*local_res8)[1])(local_res8,DAT_1419fea98);
  pppplVar6 = (longlong ****)(*(code *)(*local_res8)[2])(local_res8,DAT_1419fea98);
  uStack_70 = (longlong ***)(ulonglong)(uint)uStack_70;
  local_78 = (longlong ***)0x0;
  iVar3 = FUN_140e851f0(puVar4,&local_78,DAT_141955260,0);
  if ((1 << ((byte)((ulonglong)uStack_70 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (iVar3 == 0) {
    local_78 = (longlong ***)&local_res8;
    uStack_70 = (longlong ***)&local_a8;
    local_68 = (longlong ***)&local_b8;
    fVar10 = (float)FUN_1407b60c0(&local_78);
    uStack_70 = (longlong ***)((ulonglong)uStack_70 & 0xffffffff);
    local_78 = (longlong ***)(double)fVar10;
    pppplVar9 = &local_78;
    bVar2 = false;
    bVar1 = true;
    bVar7 = 0;
  }
  else {
    uStack_7c = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_80 = *(uint *)(puVar4 + 1);
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) == 0) {
      local_88 = (longlong ***)*puVar4;
    }
    else {
      FUN_1400419b0(&local_88,puVar4);
    }
    pppplVar9 = &local_88;
    bVar2 = true;
    bVar1 = false;
    bVar7 = uStack_70._4_1_;
  }
  FUN_140e609c0(local_res8);
  if (pppplVar9 != pppplVar6) {
    local_98 = *pppplVar9;
    uStack_90 = *(uint *)(pppplVar9 + 1);
    uStack_8c = *(undefined4 *)((longlong)pppplVar9 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)pppplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pppplVar6);
    }
    FUN_140041b80(pppplVar6,&local_98);
  }
  if (bVar2) {
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
  }
  if ((bVar1) && ((1 << (bVar7 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_78);
  }
  FUN_140e60910(1);
  local_48 = 0xc;
  puVar4 = (undefined8 *)(*(code *)(*local_res8)[2])(local_res8,DAT_1419fea68);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return;
}

